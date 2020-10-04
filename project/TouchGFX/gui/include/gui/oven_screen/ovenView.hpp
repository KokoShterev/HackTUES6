#ifndef OVENVIEW_HPP
#define OVENVIEW_HPP

#include <gui_generated/oven_screen/ovenViewBase.hpp>
#include <gui/oven_screen/ovenPresenter.hpp>

class ovenView : public ovenViewBase
{
public:
    ovenView();
    virtual ~ovenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // OVENVIEW_HPP
