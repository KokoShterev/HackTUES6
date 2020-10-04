#ifndef KITCHENVIEW_HPP
#define KITCHENVIEW_HPP

#include <gui_generated/kitchen_screen/KitchenViewBase.hpp>
#include <gui/kitchen_screen/KitchenPresenter.hpp>

class KitchenView : public KitchenViewBase
{
public:
    KitchenView();
    virtual ~KitchenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // KITCHENVIEW_HPP
