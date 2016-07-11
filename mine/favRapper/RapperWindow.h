#pragma once

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/entry.h>

class RapperWindow : public Gtk::Window {
public:
	RapperWindow();
	virtual ~RapperWindow();
private:
	void on_button_clicked();

	Gtk::Box ui_box;
	Gtk::Button ui_button;
	Gtk::Entry ui_text_entry;
};