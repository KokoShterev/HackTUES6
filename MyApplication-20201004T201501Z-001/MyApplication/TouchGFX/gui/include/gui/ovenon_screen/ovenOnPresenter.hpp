#ifndef OVENONPRESENTER_HPP
#define OVENONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ovenOnView;

class ovenOnPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ovenOnPresenter(ovenOnView& v);

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

    virtual ~ovenOnPresenter() {};

private:
    ovenOnPresenter();

    ovenOnView& view;
};

#endif // OVENONPRESENTER_HPP
