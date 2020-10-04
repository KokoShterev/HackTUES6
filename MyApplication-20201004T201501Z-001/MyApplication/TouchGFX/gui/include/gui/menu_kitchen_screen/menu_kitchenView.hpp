#ifndef MENU_KITCHENVIEW_HPP
#define MENU_KITCHENVIEW_HPP

#include <gui_generated/menu_kitchen_screen/menu_kitchenViewBase.hpp>
#include <gui/menu_kitchen_screen/menu_kitchenPresenter.hpp>

class menu_kitchenView : public menu_kitchenViewBase
{
public:
    menu_kitchenView();
    virtual ~menu_kitchenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MENU_KITCHENVIEW_HPP
