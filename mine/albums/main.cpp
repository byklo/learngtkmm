#include <gtkmm/application.h>
#include "AlbumsWindow.h"

int main(int argc, char* argv[]) {
	auto app = Gtk::Application::create(argc, argv);
	AlbumsWindow album_window;
	return app->run(album_window);
}