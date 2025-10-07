//['RestoreOp', 'NoopOp', 'ClipPathOp', 'SaveOp', 'TranslateOp', 'ClipRectOp', 'DrawRectOp']

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "gm.h"

#include "include/core/SkCanvas.h"
#include "include/core/SkBitmap.h"
#include "include/core/SkBlendMode.h"
#include "include/core/SkColor.h"
#include "include/core/SkRRect.h"
#include "include/core/SkPath.h"
#include "include/private/chromium/Slug.h"
#include "src/core/SkPaintPriv.h"
#include "src/core/SkReadBuffer.h"

#include "tools/ToolUtils.h"

#define inf 9999999

// Deserialize hex string to raw data
void hexToRawData(const std::string& hexString, void* output, size_t size) {
    unsigned char* byteOutput = static_cast<unsigned char*>(output);
    for (size_t i = 0; i < size; ++i) {
        std::istringstream iss(hexString.substr(i * 2, 2));
        int byte;
        iss >> std::hex >> byte;
        byteOutput[i] = static_cast<unsigned char>(byte);
    }
}



// Begin loading ops and loading data when needed
// Failed to find matching Op: Noop

                DEF_SIMPLE_GM(loggedskiatest1, canvas, 1312, 672) {
                
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect0 = malloc(28);
        hexToRawData("00000000000080400000803fdedd5d3fdedd5d3f0000803f01010000", paintdata_rect0, 28);
        SkReadBuffer paintBuffer_rect0(paintdata_rect0, 28);
        SkPaint paintRect0 = SkPaintPriv::Unflatten(paintBuffer_rect0);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect1 = malloc(28);
        hexToRawData("0000000000008040f2f1713ff2f1713ff2f1713f0000803f01030000", paintdata_rect1, 28);
        SkReadBuffer paintBuffer_rect1(paintdata_rect1, 28);
        SkPaint paintRect1 = SkPaintPriv::Unflatten(paintBuffer_rect1);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect2 = malloc(28);
        hexToRawData("00000000000080400000803fdedd5d3fdedd5d3f0000803f01030000", paintdata_rect2, 28);
        SkReadBuffer paintBuffer_rect2(paintdata_rect2, 28);
        SkPaint paintRect2 = SkPaintPriv::Unflatten(paintBuffer_rect2);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//ClipPathOp
        void *clipPathdata0 = malloc(200);
        hexToRawData("0500000016000000000000000800000042602d4173680d428c6c5741078107426f128741508de7416f128741285ccf418c6c5741e6d0f64146b6b33f9999ed41c1cae13fde24a2419eef0740ae47214124db6941aaf11a410000904155e3253f6f12ab41aaf11a4107810742ae472141aaf10842de24a2414e620a429999ed41ba49b441e6d0f64191ed9841285ccf4191ed9841508de741ba49b44107810742e04fc94173680d422731a84107810742b29d6f410781074242602d4173680d420004040404040404", clipPathdata0, 200);
        SkPath clip_path0;
        clip_path0.readFromMemory(clipPathdata0, 200);
        if (!clip_path0.isValid())
            std::cout << "invalid clip_path 0";
        
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect3 = malloc(28);
        hexToRawData("0000000000008040285ccf3e47fd333fb81e653f0000803f01030000", paintdata_rect3, 28);
        SkReadBuffer paintBuffer_rect3(paintdata_rect3, 28);
        SkPaint paintRect3 = SkPaintPriv::Unflatten(paintBuffer_rect3);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//ClipPathOp
        void *clipPathdata1 = malloc(176);
        hexToRawData("050000001300000000000000080000000000dc41ec513c413e0acd41eb511041295ca24167669e40c2f56a4185eba140b81ef14015aea3400000000015ae234100000000cdcc974100000000e2fa1042cdccad419a1910420000dc412a5c4e429a1905429a19104200005c42e2fa104200005c42cdcc974100005c4215ae234129dc3d4215aea3409042214285eba140ebd10a4267669e40c2f5ea41eb5110410000dc41ec513c410004040404040405", clipPathdata1, 176);
        SkPath clip_path1;
        clip_path1.readFromMemory(clipPathdata1, 176);
        if (!clip_path1.isValid())
            std::cout << "invalid clip_path 1";
        
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect4 = malloc(28);
        hexToRawData("0000000000008040285ccf3e3dc32e3fb81e653f0000803f01030000", paintdata_rect4, 28);
        SkReadBuffer paintBuffer_rect4(paintdata_rect4, 28);
        SkPaint paintRect4 = SkPaintPriv::Unflatten(paintBuffer_rect4);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//TranslateOp
std::cout << "init op type: RestoreOp\n";
//ClipRectOp
std::cout << "init op type: RestoreOp\n";
//ClipPathOp
        void *clipPathdata2 = malloc(200);
        hexToRawData("05000000160000000000000008000000e17a104114aeeb411f8533410bd7e141b91e6141c3f5c041b91e6141ccccac411f85334115aecd4190c2953f0000c641f628bc3fb91e87415d8fe23f6666064148e14241b81e014100007041713d0a3f5d8f8e41b81e01410bd7e14166660641713de441b91e8741d7a3e6410000c641703d964115aecd4146e17e41ccccac4146e17e41c3f5c041703d96410bd7e14190c2a74114aeeb41f6288c410bd7e14115ae47410bd7e141e17a104114aeeb410004040404040404", clipPathdata2, 200);
        SkPath clip_path2;
        clip_path2.readFromMemory(clipPathdata2, 200);
        if (!clip_path2.isValid())
            std::cout << "invalid clip_path 2";
        
std::cout << "init op type: RestoreOp\n";
//SaveOp
std::cout << "init op type: RestoreOp\n";
//DrawRectOp
        void *paintdata_rect5 = malloc(28);
        hexToRawData("0000000000008040285ccf3e09ac2c3fb81e653f0000803f01030000", paintdata_rect5, 28);
        SkReadBuffer paintBuffer_rect5(paintdata_rect5, 28);
        SkPaint paintRect5 = SkPaintPriv::Unflatten(paintBuffer_rect5);
    
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//RestoreOp
std::cout << "init op type: RestoreOp\n";
//Noop
std::cout << "init op type: RestoreOp\n";
//RestoreOp
// Begin rendering ops to skia
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(0.000000, -1340.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 1340.000000, 1312.000000, 2012.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, false);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 1302.000000, 2584.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect0);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(201.000000, 992.000000);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 0.000000, 900.000000, 600.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 900.000000, 604.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect1);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 900.000000, 600.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect2);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 0.000000, 900.000000, 600.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(826.156189, 545.583435);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(1.000000, 0.000000, 35.000000, 36.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: ClipPathOp\n";
{
            canvas->clipPath(clip_path0, SkClipOp::kIntersect, true);
            free(clipPathdata0);
        
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 36.000000, 36.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect3);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(536.543640, 422.848785);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(0.000000, 5.000000, 55.000000, 52.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: ClipPathOp\n";
{
            canvas->clipPath(clip_path1, SkClipOp::kIntersect, true);
            free(clipPathdata1);
        
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 55.000000, 55.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect4);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: TranslateOp\n";
canvas->translate(128.800522, 351.421417);
std::cout << "render op type: ClipRectOp\n";
{
            SkRect rect = SkRect::MakeLTRB(1.000000, 0.000000, 29.000000, 30.000000);
            canvas->clipRect(rect, SkClipOp::kIntersect, true);
        }
std::cout << "render op type: ClipPathOp\n";
{
            canvas->clipPath(clip_path2, SkClipOp::kIntersect, true);
            free(clipPathdata2);
        
        }
std::cout << "render op type: SaveOp\n";
canvas->save();
std::cout << "render op type: DrawRectOp\n";
{
        SkRect rect= SkRect::MakeLTRB(0.000000, 0.000000, 30.000000, 30.000000);
        //SkPaint p;
        //p.setColor(SkColors::kYellow);
        canvas->drawRect(rect, paintRect5);
        }
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: RestoreOp\n";
canvas->restore();
std::cout << "render op type: Noop\n";
// Render not implemented for: Noop
std::cout << "render op type: RestoreOp\n";
canvas->restore();
}// End Paint Buffer: 50AD28D9786884414F0D352B530464AF_1757518010235904.paintbuf
