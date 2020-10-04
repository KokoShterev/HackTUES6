#ifndef EXTRACTORVIEW_HPP
#define EXTRACTORVIEW_HPP

#include <gui_generated/extractor_screen/extractorViewBase.hpp>
#include <gui/extractor_screen/extractorPresenter.hpp>

class extractorView : public extractorViewBase
{
public:
    extractorView();
    virtual ~extractorView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // EXTRACTORVIEW_HPP
