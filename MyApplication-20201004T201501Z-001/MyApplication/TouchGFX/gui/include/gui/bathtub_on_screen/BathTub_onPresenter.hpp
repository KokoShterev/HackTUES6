#ifndef BATHTUB_ONPRESENTER_HPP
#define BATHTUB_ONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class BathTub_onView;

class BathTub_onPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    BathTub_onPresenter(BathTub_onView& v);

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

    virtual ~BathTub_onPresenter() {};

private:
    BathTub_onPresenter();

    BathTub_onView& view;
};

#endif // BATHTUB_ONPRESENTER_HPP
