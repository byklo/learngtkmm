/*
 * Displays an image in a window. 
 */

#include <gtkmm/main.h>
#include "card.h"

int main( int argc, char * argv[] ) {
	Gtk::Main  kit( argc, argv );    // Initialize gtkmm with the command line arguments, as appropriate.
	Card card;                // Create the window with the image.
	Gtk::Main::run( card );         // Show the window and return when it is closed.
	
	return 0;
}
