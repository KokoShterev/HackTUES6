#ifndef TEMPERATUREVIEW_HPP
#define TEMPERATUREVIEW_HPP

#include <gui_generated/temperature_screen/temperatureViewBase.hpp>
#include <gui/temperature_screen/temperaturePresenter.hpp>

class temperatureView : public temperatureViewBase
{
public:
    temperatureView();
    virtual ~temperatureView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TEMPERATUREVIEW_HPP
