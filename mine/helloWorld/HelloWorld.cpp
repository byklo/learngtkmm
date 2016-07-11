#include <iostream>
#include "HelloWorld.h"

HelloWorld::HelloWorld() : m_button("wataquad ?!") {
	// initializaiton list initializes the button with a label

	// set border width of window
	set_border_width(10);

	// "binds" the HelloWorld::on_button_clicked() function to the m_button's click event
	m_button.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));

	// "packs" the button into the window
	add(m_button);

	// "display" the button
	m_button.show();
}

HelloWorld::~HelloWorld() {

}

void HelloWorld::on_button_clicked() {
	std::cout << "WATAQUAD ?!" << std::endl;
}