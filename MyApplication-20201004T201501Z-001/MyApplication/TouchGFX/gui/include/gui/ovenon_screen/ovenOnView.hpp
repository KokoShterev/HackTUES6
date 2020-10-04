#ifndef OVENONVIEW_HPP
#define OVENONVIEW_HPP

#include <gui_generated/ovenon_screen/ovenOnViewBase.hpp>
#include <gui/ovenon_screen/ovenOnPresenter.hpp>

class ovenOnView : public ovenOnViewBase
{
public:
    ovenOnView();
    virtual ~ovenOnView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // OVENONVIEW_HPP
