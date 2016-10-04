/*
 * Displays a text entry field in a dialog box when the button in the window is clicked. 
 */

#ifndef GTKMM_EXAMPLE_HELLO_H
#define GTKMM_EXAMPLE_HELLO_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class Hello : public Gtk::Window {
public:
	Hello();
	virtual ~Hello();
	
protected:
    // Signal handlers:
    virtual void onButtonClicked();
    
	// Member widgets:
    Gtk::Button button; // Button to trigger the dialog box
};

#endif
