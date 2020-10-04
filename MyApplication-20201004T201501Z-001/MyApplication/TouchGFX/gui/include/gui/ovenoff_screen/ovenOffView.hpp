#ifndef OVENOFFVIEW_HPP
#define OVENOFFVIEW_HPP

#include <gui_generated/ovenoff_screen/ovenOffViewBase.hpp>
#include <gui/ovenoff_screen/ovenOffPresenter.hpp>

class ovenOffView : public ovenOffViewBase
{
public:
    ovenOffView();
    virtual ~ovenOffView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // OVENOFFVIEW_HPP
