/*
 * Ch. 3 of "Programming with gtkmm", pp. 11-14
 *
 * Displays a label in the window.
 */

#include "helloworld.h"
#include <iostream>

// Creates a new button with the label "Hello World".
HelloWorld::HelloWorld() : m_label( "I'm a label!" ) {
	// Sets the border width of the window.
	set_border_width( 50 );
	
	// This packs the label into the Window (a container).
	add( m_label );
	// The final step is to display this newly created widget.
	m_label.show();
}

HelloWorld::~HelloWorld() {}

