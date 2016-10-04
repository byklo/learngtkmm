/*
 * Ch. 3 of "Programming with gtkmm", pp. 11-14
 *
 * Creates a button that you can chase with your mouse. 
*/

#include <gtkmm/main.h>
#include "hidebuttons.h"

int main( int argc, char * argv[] ) {
	Gtk::Main  kit( argc, argv );    // Initialize gtkmm with the command line arguments, as appropriate.
	HideButtons mischief;            // Create the window with the button.
	Gtk::Main::run( mischief );      // Show the window and return when it is closed.
	
	return 0;
} 
