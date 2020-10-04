#ifndef BATHTUB_OFFPRESENTER_HPP
#define BATHTUB_OFFPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class BathTub_offView;

class BathTub_offPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    BathTub_offPresenter(BathTub_offView& v);

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

    virtual ~BathTub_offPresenter() {};

private:
    BathTub_offPresenter();

    BathTub_offView& view;
};

#endif // BATHTUB_OFFPRESENTER_HPP
