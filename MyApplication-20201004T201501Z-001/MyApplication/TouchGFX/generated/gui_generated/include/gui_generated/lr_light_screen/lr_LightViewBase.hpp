/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef LR_LIGHTVIEWBASE_HPP
#define LR_LIGHTVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/lr_light_screen/lr_LightPresenter.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>

class lr_LightViewBase : public touchgfx::View<lr_LightPresenter>
{
public:
    lr_LightViewBase();
    virtual ~lr_LightViewBase() {}
    virtual void setupScreen();
    virtual void afterTransition();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::ScalableImage scalableImage1;
    touchgfx::ScalableImage light1;
    touchgfx::ScalableImage light1_1;
    touchgfx::ScalableImage light1_2;
    touchgfx::Button go_back;
    touchgfx::Button lights;
    touchgfx::MoveAnimator< touchgfx::ButtonWithLabel > bedroom;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<lr_LightViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    /*
     * Interaction Callback Declarations
     */
    touchgfx::Callback < lr_LightViewBase, const touchgfx::MoveAnimator<touchgfx::ButtonWithLabel>& > anim1EndedCallback;


    /*
     * Interaction Handlers
     */
    void anim1EndedCallbackHandler(const touchgfx::MoveAnimator<touchgfx::ButtonWithLabel>& comp);

};

#endif // LR_LIGHTVIEWBASE_HPP
