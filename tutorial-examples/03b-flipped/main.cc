/*
 * Ch. 3 of "Programming with gtkmm", pp. 11-14
 *
 * Displays two buttons with different functionality. 
*/

#include <gtkmm/main.h>
#include "buttons.h"

int main( int argc, char * argv[] ) {
	Gtk::Main  kit( argc, argv );    // Initialize gtkmm with the command line arguments, as appropriate.
	Buttons buttons;                // Create the window with the button.
	Gtk::Main::run( buttons );         // Show the window and return when it is closed.
	
	return 0;
} 
