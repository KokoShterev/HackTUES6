#ifndef MENU_KITCHENPRESENTER_HPP
#define MENU_KITCHENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class menu_kitchenView;

class menu_kitchenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    menu_kitchenPresenter(menu_kitchenView& v);

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

    virtual ~menu_kitchenPresenter() {};

private:
    menu_kitchenPresenter();

    menu_kitchenView& view;
};

#endif // MENU_KITCHENPRESENTER_HPP
