#ifndef KITCHENPRESENTER_HPP
#define KITCHENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class KitchenView;

class KitchenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    KitchenPresenter(KitchenView& v);

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

    virtual ~KitchenPresenter() {};

private:
    KitchenPresenter();

    KitchenView& view;
};

#endif // KITCHENPRESENTER_HPP
