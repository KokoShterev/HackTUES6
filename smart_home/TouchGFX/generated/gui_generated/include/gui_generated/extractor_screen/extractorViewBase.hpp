/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef EXTRACTORVIEWBASE_HPP
#define EXTRACTORVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/extractor_screen/extractorPresenter.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/AnimatedImage.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class extractorViewBase : public touchgfx::View<extractorPresenter>
{
public:
    extractorViewBase();
    virtual ~extractorViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::ScalableImage scalableImage1;
    touchgfx::AnimatedImage propeller_MOVE;
    touchgfx::ToggleButton toggle_aspirator;
    touchgfx::TextArea textArea1;
    touchgfx::ScalableImage scalableImage2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > back;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<extractorViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<extractorViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // EXTRACTORVIEWBASE_HPP
