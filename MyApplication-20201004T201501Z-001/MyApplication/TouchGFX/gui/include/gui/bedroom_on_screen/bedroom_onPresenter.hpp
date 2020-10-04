#ifndef BEDROOM_ONPRESENTER_HPP
#define BEDROOM_ONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class bedroom_onView;

class bedroom_onPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    bedroom_onPresenter(bedroom_onView& v);

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

    virtual ~bedroom_onPresenter() {};

private:
    bedroom_onPresenter();

    bedroom_onView& view;
};

#endif // BEDROOM_ONPRESENTER_HPP
