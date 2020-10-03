#ifndef CONTROLERVIEW_HPP
#define CONTROLERVIEW_HPP

#include <gui_generated/controler_screen/controlerViewBase.hpp>
#include <gui/controler_screen/controlerPresenter.hpp>

class controlerView : public controlerViewBase
{
public:
    controlerView();
    virtual ~controlerView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CONTROLERVIEW_HPP
