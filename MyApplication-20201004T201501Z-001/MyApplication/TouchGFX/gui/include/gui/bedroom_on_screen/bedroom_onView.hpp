#ifndef BEDROOM_ONVIEW_HPP
#define BEDROOM_ONVIEW_HPP

#include <gui_generated/bedroom_on_screen/bedroom_onViewBase.hpp>
#include <gui/bedroom_on_screen/bedroom_onPresenter.hpp>

class bedroom_onView : public bedroom_onViewBase
{
public:
    bedroom_onView();
    virtual ~bedroom_onView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BEDROOM_ONVIEW_HPP
