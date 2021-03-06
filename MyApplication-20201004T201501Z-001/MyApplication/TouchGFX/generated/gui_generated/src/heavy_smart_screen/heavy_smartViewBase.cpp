/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/heavy_smart_screen/heavy_smartViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>

heavy_smartViewBase::heavy_smartViewBase() :
    buttonCallback(this, &heavy_smartViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &heavy_smartViewBase::flexButtonCallbackHandler)
{

    scalableImage3.setBitmap(touchgfx::Bitmap(BITMAP_MAIN_BG_HOME_CONTROL_ID));
    scalableImage3.setPosition(0, 0, 480, 272);
    scalableImage3.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    image1.setXY(400, 72);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ICON_CENTER_NORMAL_ID));

    image2.setXY(0, 72);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_ICON_CENTER_HEAVYDUTY_ID));

    image4.setXY(400, 172);
    image4.setBitmap(touchgfx::Bitmap(BITMAP_ICON_CENTER_ECOWASH_ID));

    heavy_smart.setBoxWithBorderPosition(0, 0, 80, 200);
    heavy_smart.setBorderSize(5);
    heavy_smart.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    heavy_smart.setPosition(0, 72, 80, 200);
    heavy_smart.setAlpha(0);

    image3.setXY(0, 172);
    image3.setBitmap(touchgfx::Bitmap(BITMAP_ICON_CENTER_SMARTWASH_ID));

    normal_eco.setBoxWithBorderPosition(0, 0, 80, 200);
    normal_eco.setBorderSize(5);
    normal_eco.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(0, 102, 153), touchgfx::Color::getColorFrom24BitRGB(0, 153, 204), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    normal_eco.setPosition(400, 72, 80, 200);
    normal_eco.setAlpha(0);
    normal_eco.setAction(flexButtonCallback);

    back.setXY(0, 0);
    back.setBitmaps(touchgfx::Bitmap(BITMAP_BACK_ID), touchgfx::Bitmap(BITMAP_GO_BACK_BUTTON_ID));
    back.setAction(buttonCallback);

    animatedImage1.setXY(174, 72);
    animatedImage1.setBitmaps(BITMAP_WASH_FRAME_01_ID, BITMAP_WASH_FRAME_11_ID);
    animatedImage1.setUpdateTicksInterval(2);
    animatedImage1.startAnimation(false, true, true);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_BACK_CENTER_WHITE_ID));
    scalableImage1.setPosition(143, 41, 195, 195);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    add(scalableImage3);
    add(image1);
    add(image2);
    add(image4);
    add(heavy_smart);
    add(image3);
    add(normal_eco);
    add(back);
    add(animatedImage1);
    add(scalableImage1);
}

void heavy_smartViewBase::setupScreen()
{

}

void heavy_smartViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &back)
    {
        //back
        //When back clicked change screen to menu
        //Go to menu with screen transition towards North
        application().gotomenuScreenSlideTransitionNorth();
    }
}

void heavy_smartViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &normal_eco)
    {
        //normal_eco
        //When normal_eco clicked change screen to normal_eco
        //Go to normal_eco with screen transition towards East
        application().gotonormal_ecoScreenSlideTransitionEast();
    }
}
