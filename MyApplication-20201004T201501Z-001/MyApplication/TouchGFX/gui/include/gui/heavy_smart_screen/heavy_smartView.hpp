#ifndef HEAVY_SMARTVIEW_HPP
#define HEAVY_SMARTVIEW_HPP

#include <gui_generated/heavy_smart_screen/heavy_smartViewBase.hpp>
#include <gui/heavy_smart_screen/heavy_smartPresenter.hpp>

class heavy_smartView : public heavy_smartViewBase
{
public:
    heavy_smartView();
    virtual ~heavy_smartView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // HEAVY_SMARTVIEW_HPP
