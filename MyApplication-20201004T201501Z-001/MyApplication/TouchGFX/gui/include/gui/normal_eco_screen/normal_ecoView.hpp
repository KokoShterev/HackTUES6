#ifndef NORMAL_ECOVIEW_HPP
#define NORMAL_ECOVIEW_HPP

#include <gui_generated/normal_eco_screen/normal_ecoViewBase.hpp>
#include <gui/normal_eco_screen/normal_ecoPresenter.hpp>

class normal_ecoView : public normal_ecoViewBase
{
public:
    normal_ecoView();
    virtual ~normal_ecoView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // NORMAL_ECOVIEW_HPP
