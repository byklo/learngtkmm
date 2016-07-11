/*
 * Displays an image in a window. 
 */

#include "card.h"
#include <iostream>

// Creates a new button with the label "Hello World".
Card::Card() : image_card( "card.png" ) {
	// Sets the border width of the window.
	set_border_width( 10 );
	
	// This packs the image into the Window (a container).
	add( image_card );
	
	// The final step is to display this newly created widget.
	show_all();
}

Card::~Card() {}
