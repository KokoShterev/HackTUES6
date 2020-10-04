#ifndef LR_DARKPRESENTER_HPP
#define LR_DARKPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class lr_darkView;

class lr_darkPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    lr_darkPresenter(lr_darkView& v);

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

    virtual ~lr_darkPresenter() {};

private:
    lr_darkPresenter();

    lr_darkView& view;
};

#endif // LR_DARKPRESENTER_HPP
