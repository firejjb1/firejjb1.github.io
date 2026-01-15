---
layout: post
title:  "How to use Renderdoc to capture frames on Chromium on Android"
date:   2026-01-14 21:06:18 -0500
categories: Chromium
---

I was trying to figure out how Chromium renders frames in its different backends (Ganesh, Graphite), but capturing a frame was harder than I expected on Android.
Here are the steps that worked in the end. Since I'm not a Googler, this is probably not the "right" way to do it, but here it is anyway.

1. Get a rooted Android device (I was using a Pixel 9 Pro). Root permission makes everything easier.
2. Build Chromium for android. You may use whatever version, but since it's a rapidly evolving project, be warned that older of newer versions might not work the same. I was using chromium 145 (Dec 5 2025), this is the exact commit: `0d9e5947ca4067cae5b2a7a68d1907bd8bd10317`.
3. If you open Renderdoc and try to capture now, Renderdoc won't detect any frames being presented. This is because of SurfaceControl and gpu process. We need to disable both. Use adb to set arguments: `adb shell "su -c 'echo \"_ --disable-features=AndroidSurfaceControl --in-process-gpu --disable-gpu-watchdog\" > /data/local/tmp/chrome-command-line'”` 
4. You should now be able to capture frames not in the default rendering backend: Ganesh GL (`chrome://gpu` for checking which rendering backend is running). However, if you want to try the latest and greatest Skia Graphite backend, there's some extra work to do.
5. For now, if `--in-process-gpu` is set, graphite will automatically be disabled. The logic for this is in `gpu/ipc/service/gpu_init.cc`. We need to manually remove this logic and rebuild. I'm too lazy to type out all the changes. An LLM can help figure this out.

For convenience, here are the flags for enabling graphite:  `--enable-skia-graphite --skia-graphite-backend=dawn-vulkan`

I tried other approaches than `--in-process-gpu`, such as `--disable-gpu-sandbox`, or `--gpu-startup-dialog`, but didn't manage to make them work. Renderdoc just couldn't find where the damn graphics API calls are when the browser process and gpu process are separate. Making the gpu process part of the browser process does violate Chromium's architecture design, but I don't think it changes the low level graphics rendering, so for my purpose it was fine.
