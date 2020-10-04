#ifndef OVENOFFPRESENTER_HPP
#define OVENOFFPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ovenOffView;

class ovenOffPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ovenOffPresenter(ovenOffView& v);

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

    virtual ~ovenOffPresenter() {};

private:
    ovenOffPresenter();

    ovenOffView& view;
};

#endif // OVENOFFPRESENTER_HPP
