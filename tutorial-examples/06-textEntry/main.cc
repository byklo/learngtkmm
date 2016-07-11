/*
 * Creates a Dialogue box to enter your name. 
 */

#include <gtkmm/main.h>
#include "hello.h"

int main( int argc, char * argv[] ) {
	Gtk::Main  kit( argc, argv );    // Initialize gtkmm with the command line arguments, as appropriate.
	Hello window;                // Create the window with the image.
	Gtk::Main::run( window );         // Show the window and return when it is closed.
	
	return 0;
} 
