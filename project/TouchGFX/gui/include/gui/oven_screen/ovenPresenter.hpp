#ifndef OVENPRESENTER_HPP
#define OVENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ovenView;

class ovenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ovenPresenter(ovenView& v);

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

    virtual ~ovenPresenter() {};

private:
    ovenPresenter();

    ovenView& view;
};

#endif // OVENPRESENTER_HPP
