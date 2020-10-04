#ifndef WASHINGMVIEW_HPP
#define WASHINGMVIEW_HPP

#include <gui_generated/washingm_screen/washingMViewBase.hpp>
#include <gui/washingm_screen/washingMPresenter.hpp>

class washingMView : public washingMViewBase
{
public:
    washingMView();
    virtual ~washingMView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // WASHINGMVIEW_HPP
