/*
 * Displays a group of radio buttons in a dialog box when the button in the window is clicked. 
 */

#ifndef GTKMM_EXAMPLE_COLOUR_H
#define GTKMM_EXAMPLE_COLOUR_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class Colour : public Gtk::Window {
public:
	Colour();
	virtual ~Colour();
	
protected:
    // Signal handlers:
    virtual void onButtonClicked();
    
	// Member widgets:
    Gtk::Button button; // Button to trigger the dialog box
};

#endif
