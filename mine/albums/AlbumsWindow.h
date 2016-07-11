#pragma once

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/image.h>
#include <gtkmm/button.h>

#include "AlbumBank.h"

class AlbumsWindow : public Gtk::Window {
public:
	AlbumsWindow();
	virtual ~AlbumsWindow();
private:
	void shuffle();

	AlbumBank album_bank;
	Gtk::Box ui_frame;
	Gtk::Box ui_image_box;
	Gtk::Image albums[4];
	Gtk::Button ui_button;
};