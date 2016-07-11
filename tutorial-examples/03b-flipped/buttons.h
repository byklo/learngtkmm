/*
 * Ch. 3 of "Programming with gtkmm", pp. 11-14
 *
 * Displays two buttons with different functionality. 
*/

#ifndef GTKMM_EXAMPLE_BUTTONS_H
#define GTKMM_EXAMPLE_BUTTONS_H

#include <string>
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>
#include <gtkmm/window.h>

class Buttons : public Gtk::Window {
public:
	Buttons();
	virtual ~Buttons();
	
protected:
	// Signal handlers:
	virtual void onButtonClicked(std::string output);
	
	// Member widgets:
	Gtk::Label m_label_hello;
	Gtk::Label m_label_bye;

	Gtk::Button m_button_hello;
	Gtk::Button m_button_bye;

	Gtk::HBox m_hbox_hello;
	Gtk::HBox m_hbox_bye;

	Gtk::VBox m_vbox;
};

#endif
