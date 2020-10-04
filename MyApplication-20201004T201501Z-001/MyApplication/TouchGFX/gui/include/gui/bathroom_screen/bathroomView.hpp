#ifndef BATHROOMVIEW_HPP
#define BATHROOMVIEW_HPP

#include <gui_generated/bathroom_screen/bathroomViewBase.hpp>
#include <gui/bathroom_screen/bathroomPresenter.hpp>

class bathroomView : public bathroomViewBase
{
public:
    bathroomView();
    virtual ~bathroomView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BATHROOMVIEW_HPP
