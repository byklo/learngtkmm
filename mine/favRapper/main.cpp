#include <gtkmm/application.h>
#include "RapperWindow.h"

int main(int argc, char* argv[]) {
	auto app = Gtk::Application::create(argc, argv);

	RapperWindow rapper_window;

	return app->run(rapper_window);
}