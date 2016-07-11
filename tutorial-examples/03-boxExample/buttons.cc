/*
 * Ch. 3 of "Programming with gtkmm", pp. 11-14
 *
 * Displays two buttons with different functionality.
 */

#include "buttons.h"
#include <iostream>
#include <gtkmm/stock.h>

// Creates the various widgets for our window.
Buttons::Buttons() : m_label_poke("Poke:"), m_label_door("Door:"), 
				m_button_poke( "Click Here to Poke" ), m_button_door("Click Here to Leave") { 

				// Sets the border width of the window.
				set_border_width( 30 );

				add( m_hbox );
				//Add the horizontal container to the window	

				// When the button receives the "clicked" signal, it will call 
				// the onButtonClicked() method defined below.
				m_button_poke.signal_clicked().connect(sigc::bind(
								sigc::mem_fun( *this, &Buttons::onButtonClicked ), 
												"Stop poking me!" ));
				m_button_door.signal_clicked().connect(sigc::bind(
								sigc::mem_fun( *this, &Buttons::onButtonClicked ), 
												"Seeya!" ));

				// Add the vertical boxes to the horizontal box
				m_hbox.pack_start(m_vbox_poke);
				m_hbox.pack_end(m_vbox_door);

				// Add the label and button to the appropriate vertical box
				m_vbox_poke.pack_start(m_label_poke);
				m_vbox_poke.pack_end(m_button_poke);

				// Add the other labal and button to the appropriate vertical box
				m_vbox_door.pack_end(m_button_door);
				m_vbox_door.pack_start(m_label_door);



				show_all();

				/* can show_all() or can show() each individual component
				m_button.show();
				m_label.show();
				m_vbox.show();

				m_button2.show();
				m_label2.show();
				m_vbox2.show();

				m_hbox.show();
				*/
}

Buttons::~Buttons() {}

void Buttons::onButtonClicked(std::string output) {
				std::cout << output << std::endl;
}
