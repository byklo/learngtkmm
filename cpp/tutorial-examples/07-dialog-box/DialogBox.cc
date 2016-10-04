/*
 *  MyDialogBox.cc
 *
 *  Created by Caroline Kierstead on 28/05/09.
 *  Copyright 2009 UW. All rights reserved.
 *
 */
#include "DialogBox.h"
#include <gtkmm/stock.h>
#include <iostream>

using std::string;
using std::vector;

// Specifies the parent window of the dialog box and the title of the dialog box.
DialogBox::DialogBox( Gtk::Window & parentWindow, string title) : Dialog( title, parentWindow, true, true ) {
	vector<string> messages;
	messages.push_back( "Red" );
	messages.push_back( "Green" );
	messages.push_back( "Blue" );
	messages.push_back( "Cyan" );
	
	// Obtain the dialog box's vertical alignment box.
	Gtk::VBox* contentArea = this->get_vbox();
	
	// Set up a group of radio buttons
	for ( unsigned int i = 0; i < messages.size(); i++ ) {
		buttons.push_back( Gtk::manage( new Gtk::RadioButton( group, messages[i] ) ) );
		contentArea->add( *buttons[i] );
	} 
	
	// Make the first button the initial active choice.
	// buttons[0]->set_active();
	
	// Add a standard "ok" button with the appropriate responses when clicked.
  add_button( Gtk::Stock::OK, Gtk::RESPONSE_OK);
	show_all_children();
	
    // Wait for a response from the dialog box.
	int result = run();
  switch (result) {
    case Gtk::RESPONSE_OK:
      for ( unsigned int i = 0; i < messages.size(); i++ ) {
				if ( buttons[i]->get_active() ) {
					std::cout << "You chose '" << messages[i] << "'.  Good choice!" << std::endl;
					break;
				}
			}
      break;
  }     	
}

DialogBox::~DialogBox() {
	for ( unsigned int i = 0; i < buttons.size(); i++ ) delete buttons[i];
	buttons.clear();
}
