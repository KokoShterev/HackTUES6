#ifndef BATHTUB_ONVIEW_HPP
#define BATHTUB_ONVIEW_HPP

#include <gui_generated/bathtub_on_screen/BathTub_onViewBase.hpp>
#include <gui/bathtub_on_screen/BathTub_onPresenter.hpp>

class BathTub_onView : public BathTub_onViewBase
{
public:
    BathTub_onView();
    virtual ~BathTub_onView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BATHTUB_ONVIEW_HPP
