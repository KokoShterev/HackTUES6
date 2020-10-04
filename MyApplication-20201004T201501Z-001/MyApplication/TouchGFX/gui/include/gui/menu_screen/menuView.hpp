#ifndef MENUVIEW_HPP
#define MENUVIEW_HPP

#include <gui_generated/menu_screen/menuViewBase.hpp>
#include <gui/menu_screen/menuPresenter.hpp>

class menuView : public menuViewBase
{
public:
    menuView();
    virtual ~menuView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MENUVIEW_HPP
