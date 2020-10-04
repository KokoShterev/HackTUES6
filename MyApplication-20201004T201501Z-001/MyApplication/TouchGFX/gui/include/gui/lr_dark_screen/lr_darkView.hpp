#ifndef LR_DARKVIEW_HPP
#define LR_DARKVIEW_HPP

#include <gui_generated/lr_dark_screen/lr_darkViewBase.hpp>
#include <gui/lr_dark_screen/lr_darkPresenter.hpp>

class lr_darkView : public lr_darkViewBase
{
public:
    lr_darkView();
    virtual ~lr_darkView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LR_DARKVIEW_HPP
