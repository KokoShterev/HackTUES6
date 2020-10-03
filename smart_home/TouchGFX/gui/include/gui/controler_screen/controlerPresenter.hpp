#ifndef CONTROLERPRESENTER_HPP
#define CONTROLERPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class controlerView;

class controlerPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    controlerPresenter(controlerView& v);

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

    virtual ~controlerPresenter() {};

private:
    controlerPresenter();

    controlerView& view;
};

#endif // CONTROLERPRESENTER_HPP
