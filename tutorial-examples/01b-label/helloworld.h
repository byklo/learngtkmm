/*
 * Ch. 3 of "Programming with gtkmm", pp. 11-14
 *
 * Displays a label in the window.
 */

#ifndef GTKMM_EXAMPLE_HELLOWORLD_H
#define GTKMM_EXAMPLE_HELLOWORLD_H

#include <gtkmm/window.h>
#include <gtkmm/label.h>

class HelloWorld : public Gtk::Window {
public:
	HelloWorld();
	virtual ~HelloWorld();
	
protected:
	Gtk::Label m_label;
};

#endif
