#ifndef BEDROOM_OFFPRESENTER_HPP
#define BEDROOM_OFFPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class bedroom_offView;

class bedroom_offPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    bedroom_offPresenter(bedroom_offView& v);

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

    virtual ~bedroom_offPresenter() {};

private:
    bedroom_offPresenter();

    bedroom_offView& view;
};

#endif // BEDROOM_OFFPRESENTER_HPP
