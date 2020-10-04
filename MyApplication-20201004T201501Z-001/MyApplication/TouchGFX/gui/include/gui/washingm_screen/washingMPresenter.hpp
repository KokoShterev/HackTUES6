#ifndef WASHINGMPRESENTER_HPP
#define WASHINGMPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class washingMView;

class washingMPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    washingMPresenter(washingMView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~washingMPresenter() {};

private:
    washingMPresenter();

    washingMView& view;
};

#endif // WASHINGMPRESENTER_HPP
