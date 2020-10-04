#ifndef HEAVY_SMARTPRESENTER_HPP
#define HEAVY_SMARTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class heavy_smartView;

class heavy_smartPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    heavy_smartPresenter(heavy_smartView& v);

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

    virtual ~heavy_smartPresenter() {};

private:
    heavy_smartPresenter();

    heavy_smartView& view;
};

#endif // HEAVY_SMARTPRESENTER_HPP
