#ifndef LR_LIGHTPRESENTER_HPP
#define LR_LIGHTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class lr_LightView;

class lr_LightPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    lr_LightPresenter(lr_LightView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~lr_LightPresenter() {};

private:
    lr_LightPresenter();

    lr_LightView& view;
};

#endif // LR_LIGHTPRESENTER_HPP
