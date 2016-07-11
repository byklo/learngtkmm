/*
 * Ch. 3 of "Programming with gtkmm", pp. 11-14
 *
 * Display two buttons with different functionality. 
*/

#include "buttons.h"
#include <iostream>
#include <gtkmm/stock.h>

Buttons::Buttons() : m_label_hello("Hello!"), m_label_bye("Goodbye!"), 
m_button_hello( "Hello World" ), m_button_bye("Goodbye World") { 
        
	// Sets the border width of the window.
	set_border_width( 30 );
    
	add( m_vbox );
	
	// When the button receives the "clicked" signal, it will call 
    // the onButtonClicked() method defined below.
	m_button_hello.signal_clicked().connect(sigc::bind(
        sigc::mem_fun( *this, &Buttons::onButtonClicked ), 
            "Hiya!" ));
	m_button_bye.signal_clicked().connect(sigc::bind(
        sigc::mem_fun( *this, &Buttons::onButtonClicked ), 
            "See ya!" ));
	
    // This time, we'll pack a pair of horizontal boxes into a vertical box
    m_vbox.pack_start(m_hbox_hello);
    m_vbox.pack_end(m_hbox_bye);
    
    m_hbox_hello.pack_end(m_button_hello);
    m_hbox_hello.pack_end(m_label_hello);

    m_hbox_bye.pack_start(m_label_bye);
    m_hbox_bye.pack_start(m_button_bye);


    //show_all();

    m_button_hello.show();
    m_label_hello.show();
    m_hbox_hello.show();

    m_button_bye.show();
    m_label_bye.show();
    m_hbox_bye.show();

    m_vbox.show();
}

Buttons::~Buttons() {}

void Buttons::onButtonClicked(std::string output) {
	std::cout << output << std::endl;
} 
