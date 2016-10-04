/*
 * Displays an image in a window. 
 */

#ifndef GTKMM_EXAMPLE_CARD_H
#define GTKMM_EXAMPLE_CARD_H

#include <gtkmm/image.h>
#include <gtkmm/window.h>

class Card : public Gtk::Window {
public:
	Card();
	virtual ~Card();
	
protected:
	// Member widgets:
	Gtk::Image image_card;
};

#endif
