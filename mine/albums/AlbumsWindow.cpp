#include "AlbumsWindow.h"
#include <random>
#include <set>

AlbumsWindow::AlbumsWindow()
:	ui_button("shuffle"),
	ui_frame(Gtk::ORIENTATION_VERTICAL),
	ui_image_box(Gtk::ORIENTATION_HORIZONTAL)
{
	set_border_width(10);
	add(ui_frame);
	ui_frame.set_spacing(5);
	ui_frame.pack_start(ui_image_box);

	for (int i = 0; i < 4; i++) {
		albums[i].set(album_bank.getAlbumImage(i));
		ui_image_box.pack_start(albums[i]);
	}

	ui_frame.pack_start(ui_button);
	ui_button.signal_clicked().connect(sigc::mem_fun(*this, &AlbumsWindow::shuffle));

	show_all_children();
}

AlbumsWindow::~AlbumsWindow() {

}

void AlbumsWindow::shuffle() {
	static std::mt19937 rng(75);
	int n = album_bank.getAlbumCount();
	int k = (int) (rng() % n);

	std::set<int> indices;

	while (indices.size() < 4) {
		indices.insert(k);
		k = (int) (rng() % n);
	}

	for (int i = 0; i < 4; i++) {
		albums[i].set(album_bank.getAlbumImage(*std::next(indices.begin(), i)));
	}
}