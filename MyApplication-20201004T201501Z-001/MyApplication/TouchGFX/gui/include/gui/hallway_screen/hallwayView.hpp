#ifndef HALLWAYVIEW_HPP
#define HALLWAYVIEW_HPP

#include <gui_generated/hallway_screen/hallwayViewBase.hpp>
#include <gui/hallway_screen/hallwayPresenter.hpp>

class hallwayView : public hallwayViewBase
{
public:
    hallwayView();
    virtual ~hallwayView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // HALLWAYVIEW_HPP
