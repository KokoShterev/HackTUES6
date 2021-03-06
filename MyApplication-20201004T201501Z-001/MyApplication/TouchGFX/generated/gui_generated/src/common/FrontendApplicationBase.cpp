/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include<platform/driver/lcd/LCD24bpp.hpp>
#include <gui/hallway_screen/hallwayView.hpp>
#include <gui/hallway_screen/hallwayPresenter.hpp>
#include <gui/lr_dark_screen/lr_darkView.hpp>
#include <gui/lr_dark_screen/lr_darkPresenter.hpp>
#include <gui/lr_light_screen/lr_LightView.hpp>
#include <gui/lr_light_screen/lr_LightPresenter.hpp>
#include <gui/bedroom_off_screen/bedroom_offView.hpp>
#include <gui/bedroom_off_screen/bedroom_offPresenter.hpp>
#include <gui/bedroom_on_screen/bedroom_onView.hpp>
#include <gui/bedroom_on_screen/bedroom_onPresenter.hpp>
#include <gui/bathroom_screen/bathroomView.hpp>
#include <gui/bathroom_screen/bathroomPresenter.hpp>
#include <gui/menu_screen/menuView.hpp>
#include <gui/menu_screen/menuPresenter.hpp>
#include <gui/washingm_screen/washingMView.hpp>
#include <gui/washingm_screen/washingMPresenter.hpp>
#include <gui/heavy_smart_screen/heavy_smartView.hpp>
#include <gui/heavy_smart_screen/heavy_smartPresenter.hpp>
#include <gui/normal_eco_screen/normal_ecoView.hpp>
#include <gui/normal_eco_screen/normal_ecoPresenter.hpp>
#include <gui/bathtub_off_screen/BathTub_offView.hpp>
#include <gui/bathtub_off_screen/BathTub_offPresenter.hpp>
#include <gui/bathtub_on_screen/BathTub_onView.hpp>
#include <gui/bathtub_on_screen/BathTub_onPresenter.hpp>
#include <gui/kitchen_screen/KitchenView.hpp>
#include <gui/kitchen_screen/KitchenPresenter.hpp>
#include <gui/menu_kitchen_screen/menu_kitchenView.hpp>
#include <gui/menu_kitchen_screen/menu_kitchenPresenter.hpp>
#include <gui/extractor_screen/extractorView.hpp>
#include <gui/extractor_screen/extractorPresenter.hpp>
#include <gui/ovenoff_screen/ovenOffView.hpp>
#include <gui/ovenoff_screen/ovenOffPresenter.hpp>
#include <gui/ovenon_screen/ovenOnView.hpp>
#include <gui/ovenon_screen/ovenOnPresenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD24bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
}

/*
 * Screen Transition Declarations
 */

// hallway

void FrontendApplicationBase::gotohallwayScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotohallwayScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotohallwayScreenNoTransitionImpl()
{
    touchgfx::makeTransition<hallwayView, hallwayPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// lr_dark

void FrontendApplicationBase::gotolr_darkScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotolr_darkScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotolr_darkScreenNoTransitionImpl()
{
    touchgfx::makeTransition<lr_darkView, lr_darkPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotolr_darkScreenSlideTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotolr_darkScreenSlideTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotolr_darkScreenSlideTransitionNorthImpl()
{
    touchgfx::makeTransition<lr_darkView, lr_darkPresenter, touchgfx::SlideTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// lr_Light

void FrontendApplicationBase::gotolr_LightScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotolr_LightScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotolr_LightScreenSlideTransitionSouthImpl()
{
    touchgfx::makeTransition<lr_LightView, lr_LightPresenter, touchgfx::SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// bedroom_off

void FrontendApplicationBase::gotobedroom_offScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotobedroom_offScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotobedroom_offScreenNoTransitionImpl()
{
    touchgfx::makeTransition<bedroom_offView, bedroom_offPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotobedroom_offScreenSlideTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotobedroom_offScreenSlideTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotobedroom_offScreenSlideTransitionNorthImpl()
{
    touchgfx::makeTransition<bedroom_offView, bedroom_offPresenter, touchgfx::SlideTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// bedroom_on

void FrontendApplicationBase::gotobedroom_onScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotobedroom_onScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotobedroom_onScreenSlideTransitionSouthImpl()
{
    touchgfx::makeTransition<bedroom_onView, bedroom_onPresenter, touchgfx::SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// bathroom

void FrontendApplicationBase::gotobathroomScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotobathroomScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotobathroomScreenNoTransitionImpl()
{
    touchgfx::makeTransition<bathroomView, bathroomPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotobathroomScreenSlideTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotobathroomScreenSlideTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotobathroomScreenSlideTransitionNorthImpl()
{
    touchgfx::makeTransition<bathroomView, bathroomPresenter, touchgfx::SlideTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// menu

void FrontendApplicationBase::gotomenuScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotomenuScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotomenuScreenSlideTransitionSouthImpl()
{
    touchgfx::makeTransition<menuView, menuPresenter, touchgfx::SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotomenuScreenSlideTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotomenuScreenSlideTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotomenuScreenSlideTransitionNorthImpl()
{
    touchgfx::makeTransition<menuView, menuPresenter, touchgfx::SlideTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// washingM

void FrontendApplicationBase::gotowashingMScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotowashingMScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotowashingMScreenSlideTransitionSouthImpl()
{
    touchgfx::makeTransition<washingMView, washingMPresenter, touchgfx::SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// heavy_smart

void FrontendApplicationBase::gotoheavy_smartScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoheavy_smartScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoheavy_smartScreenSlideTransitionSouthImpl()
{
    touchgfx::makeTransition<heavy_smartView, heavy_smartPresenter, touchgfx::SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoheavy_smartScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoheavy_smartScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoheavy_smartScreenSlideTransitionWestImpl()
{
    touchgfx::makeTransition<heavy_smartView, heavy_smartPresenter, touchgfx::SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// normal_eco

void FrontendApplicationBase::gotonormal_ecoScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotonormal_ecoScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotonormal_ecoScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<normal_ecoView, normal_ecoPresenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// BathTub_off

void FrontendApplicationBase::gotoBathTub_offScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoBathTub_offScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoBathTub_offScreenSlideTransitionSouthImpl()
{
    touchgfx::makeTransition<BathTub_offView, BathTub_offPresenter, touchgfx::SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoBathTub_offScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoBathTub_offScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoBathTub_offScreenNoTransitionImpl()
{
    touchgfx::makeTransition<BathTub_offView, BathTub_offPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// BathTub_on

void FrontendApplicationBase::gotoBathTub_onScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoBathTub_onScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoBathTub_onScreenNoTransitionImpl()
{
    touchgfx::makeTransition<BathTub_onView, BathTub_onPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Kitchen

void FrontendApplicationBase::gotoKitchenScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoKitchenScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoKitchenScreenNoTransitionImpl()
{
    touchgfx::makeTransition<KitchenView, KitchenPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoKitchenScreenSlideTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoKitchenScreenSlideTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoKitchenScreenSlideTransitionNorthImpl()
{
    touchgfx::makeTransition<KitchenView, KitchenPresenter, touchgfx::SlideTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// menu_kitchen

void FrontendApplicationBase::gotomenu_kitchenScreenSlideTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotomenu_kitchenScreenSlideTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotomenu_kitchenScreenSlideTransitionNorthImpl()
{
    touchgfx::makeTransition<menu_kitchenView, menu_kitchenPresenter, touchgfx::SlideTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// extractor

void FrontendApplicationBase::gotoextractorScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoextractorScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoextractorScreenSlideTransitionSouthImpl()
{
    touchgfx::makeTransition<extractorView, extractorPresenter, touchgfx::SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ovenOff

void FrontendApplicationBase::gotoovenOffScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoovenOffScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoovenOffScreenSlideTransitionSouthImpl()
{
    touchgfx::makeTransition<ovenOffView, ovenOffPresenter, touchgfx::SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoovenOffScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoovenOffScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoovenOffScreenNoTransitionImpl()
{
    touchgfx::makeTransition<ovenOffView, ovenOffPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ovenOn

void FrontendApplicationBase::gotoovenOnScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoovenOnScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoovenOnScreenNoTransitionImpl()
{
    touchgfx::makeTransition<ovenOnView, ovenOnPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
