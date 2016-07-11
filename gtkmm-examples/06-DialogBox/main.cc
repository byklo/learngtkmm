/*
 * Displays an image in a window. 
 */

#include <gtkmm/main.h>
#include "colour.h"

int main( int argc, char * argv[] ) {
	Gtk::Main  kit( argc, argv );    // Initialize gtkmm with the command line arguments, as appropriate.
	Colour window;                // Create the window with the image.
	Gtk::Main::run( window );         // Show the window and return when it is closed.
	
	return 0;
} 
