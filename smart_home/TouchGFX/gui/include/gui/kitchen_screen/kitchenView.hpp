#ifndef KITCHENVIEW_HPP
#define KITCHENVIEW_HPP

#include <gui_generated/kitchen_screen/kitchenViewBase.hpp>
#include <gui/kitchen_screen/kitchenPresenter.hpp>

class kitchenView : public kitchenViewBase
{
public:
    kitchenView();
    virtual ~kitchenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // KITCHENVIEW_HPP
