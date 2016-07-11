/*
 * Displays a group of radio buttons in a dialog box when the button in the window is clicked. 
 */

#include "colour.h"
#include "DialogBox.h"

Colour::Colour() : button("Bring up dialog box") {
	// Sets the border width of the window.
	set_border_width( 10 );
       
	// When the button receives the "clicked" signal, it will call the onButtonClicked() method defined below.
	button.signal_clicked().connect( sigc::mem_fun( *this, &Colour::onButtonClicked ) );
	
	// This packs the button into the Window (a container).
	add( button );
	
	// The final step is to display this newly created widget.
	button.show();
} 

Colour::~Colour() {}

void Colour::onButtonClicked() {
    // Create the message dialog box with stock "Ok" button. Waits until the "Ok" button has been pressed.
    DialogBox dialog( *this, "What's your favourite colour?" );
}
