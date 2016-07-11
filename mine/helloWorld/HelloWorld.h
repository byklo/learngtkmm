#pragma once

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class HelloWorld : public Gtk::Window {
public:
	HelloWorld();
	virtual ~HelloWorld();
private:
	// signal handler function
	void on_button_clicked();

	// member widget
	Gtk::Button m_button;
};