#ifndef LR_LIGHTVIEW_HPP
#define LR_LIGHTVIEW_HPP

#include <gui_generated/lr_light_screen/lr_LightViewBase.hpp>
#include <gui/lr_light_screen/lr_LightPresenter.hpp>

class lr_LightView : public lr_LightViewBase
{
public:
    lr_LightView();
    virtual ~lr_LightView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LR_LIGHTVIEW_HPP
