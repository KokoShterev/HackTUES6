#ifndef BATHTUB_OFFVIEW_HPP
#define BATHTUB_OFFVIEW_HPP

#include <gui_generated/bathtub_off_screen/BathTub_offViewBase.hpp>
#include <gui/bathtub_off_screen/BathTub_offPresenter.hpp>

class BathTub_offView : public BathTub_offViewBase
{
public:
    BathTub_offView();
    virtual ~BathTub_offView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BATHTUB_OFFVIEW_HPP
