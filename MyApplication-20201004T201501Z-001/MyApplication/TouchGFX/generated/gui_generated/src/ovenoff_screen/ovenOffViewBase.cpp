/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/ovenoff_screen/ovenOffViewBase.hpp>
#include "BitmapDatabase.hpp"

ovenOffViewBase::ovenOffViewBase() :
    buttonCallback(this, &ovenOffViewBase::buttonCallbackHandler)
{

    image1.setXY(-499, -283);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_WHITE_ID));

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_OVENOFF_ID));
    scalableImage2.setPosition(54, 0, 373, 272);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    on_off.setXY(176, 0);
    on_off.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_TOGGLEBARS_TOGGLE_LARGE_BUTTON_OFF_ID), touchgfx::Bitmap(BITMAP_DARK_TOGGLEBARS_TOGGLE_LARGE_BUTTON_ON_ID));
    on_off.setAction(buttonCallback);

    back.setXY(0, 0);
    back.setBitmaps(touchgfx::Bitmap(BITMAP_BACK_ID), touchgfx::Bitmap(BITMAP_BACK_ID));
    back.setAction(buttonCallback);

    add(image1);
    add(scalableImage2);
    add(on_off);
    add(back);
}

void ovenOffViewBase::setupScreen()
{

}

void ovenOffViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &on_off)
    {
        //on
        //When on_off clicked change screen to ovenOn
        //Go to ovenOn with no screen transition
        application().gotoovenOnScreenNoTransition();
    }
    else if (&src == &back)
    {
        //back
        //When back clicked change screen to menu_kitchen
        //Go to menu_kitchen with screen transition towards North
        application().gotomenu_kitchenScreenSlideTransitionNorth();
    }
}
