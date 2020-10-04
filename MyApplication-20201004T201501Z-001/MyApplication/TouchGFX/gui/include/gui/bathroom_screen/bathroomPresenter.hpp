#ifndef BATHROOMPRESENTER_HPP
#define BATHROOMPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class bathroomView;

class bathroomPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    bathroomPresenter(bathroomView& v);

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

    virtual ~bathroomPresenter() {};

private:
    bathroomPresenter();

    bathroomView& view;
};

#endif // BATHROOMPRESENTER_HPP
