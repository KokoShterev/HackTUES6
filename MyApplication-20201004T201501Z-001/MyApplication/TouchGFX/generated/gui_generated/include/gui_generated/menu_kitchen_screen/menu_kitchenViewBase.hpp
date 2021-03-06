/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MENU_KITCHENVIEWBASE_HPP
#define MENU_KITCHENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/menu_kitchen_screen/menu_kitchenPresenter.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class menu_kitchenViewBase : public touchgfx::View<menu_kitchenPresenter>
{
public:
    menu_kitchenViewBase();
    virtual ~menu_kitchenViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::ScalableImage scalableImage1;
    touchgfx::Button back;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > oven_button;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > extractor_button;
    touchgfx::ScalableImage scalableImage2;
    touchgfx::ScalableImage scalableImage3;
    touchgfx::TextArea oven_name;
    touchgfx::TextArea extr_name;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<menu_kitchenViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<menu_kitchenViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // MENU_KITCHENVIEWBASE_HPP
