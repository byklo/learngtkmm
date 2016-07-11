#include <iostream>
#include "RapperWindow.h"

RapperWindow::RapperWindow()
:	ui_box(Gtk::ORIENTATION_VERTICAL),
	ui_button("x")
{
	set_border_width(20);

	add(ui_box);

	ui_text_entry.set_max_length(20);
	ui_text_entry.set_placeholder_text("fav rapper?");

	ui_box.pack_start(ui_text_entry);

	ui_button.signal_clicked().connect(sigc::mem_fun(*this, &RapperWindow::on_button_clicked));

	ui_box.pack_start(ui_button);

	show_all_children();
}

RapperWindow::~RapperWindow() {

}

void RapperWindow::on_button_clicked() {
	std::cout << "Apparently, their favourite rapper is " << ui_text_entry.get_text() << '.' << std::endl;
}