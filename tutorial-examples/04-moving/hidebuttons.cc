#include "hidebuttons.h"
#include <iostream>
#include <gtkmm/stock.h>

HideButtons::HideButtons() : table(10, 10, true) { 
        // 10 rows, 10 columns, "true" is for "homogeneous" - whether or not all the
        // table cells are the same width/height.
        for (int i = 0; i < 100; i++) {
                buttons[i].set_label("Ha");
        }

        // Sets the border width of the window.
        set_border_width( 0 );
        set_default_size(500, 500);

        add( table );

        for (int i = 0; i < 100; i++) {
                buttons[i].signal_clicked().connect(sigc::mem_fun( *this, &HideButtons::onButtonClicked ));
                
                // Add an event for hovering over the button with your mouse.
                buttons[i].signal_enter().connect(sigc::mem_fun( *this, &HideButtons::onButtonEnter ));
                
                //table.attach(object, left, right, top, bottom);
                table.attach(buttons[i], i % 10, (i % 10) + 1, i / 10, (i / 10) + 1);
        }

        buttons[0].show();
        index = 0;

        table.show();
}

HideButtons::~HideButtons() {}

void HideButtons::onButtonClicked() {
        std::cout << "You got me!" << std::endl;
}

void HideButtons::onButtonEnter() {
	// Hide the current button then show the next
        buttons[index].hide();
        index = (index + 1) % 100;
        buttons[index].show();
}
