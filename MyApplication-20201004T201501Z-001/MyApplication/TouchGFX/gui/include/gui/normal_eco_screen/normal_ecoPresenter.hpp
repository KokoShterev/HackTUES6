#ifndef NORMAL_ECOPRESENTER_HPP
#define NORMAL_ECOPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class normal_ecoView;

class normal_ecoPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    normal_ecoPresenter(normal_ecoView& v);

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

    virtual ~normal_ecoPresenter() {};

private:
    normal_ecoPresenter();

    normal_ecoView& view;
};

#endif // NORMAL_ECOPRESENTER_HPP
