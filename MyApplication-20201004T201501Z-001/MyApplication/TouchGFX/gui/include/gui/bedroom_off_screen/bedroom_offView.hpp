#ifndef BEDROOM_OFFVIEW_HPP
#define BEDROOM_OFFVIEW_HPP

#include <gui_generated/bedroom_off_screen/bedroom_offViewBase.hpp>
#include <gui/bedroom_off_screen/bedroom_offPresenter.hpp>

class bedroom_offView : public bedroom_offViewBase
{
public:
    bedroom_offView();
    virtual ~bedroom_offView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BEDROOM_OFFVIEW_HPP
