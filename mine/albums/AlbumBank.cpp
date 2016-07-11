#include <gdkmm/pixbuf.h>
#include <string>
#include <vector>

#include "AlbumBank.h"

const std::vector<std::string> image_filenames = {
	"img/2014.jpeg",
	"img/808s.jpeg",
	"img/bs.jpeg",
	"img/bti.jpeg",
	"img/cb.jpeg",
	"img/co.jpeg",
	"img/dsotm.jpeg",
	"img/f.jpeg",
	"img/gkmc.jpeg",
	"img/m.jpeg",
	"img/mad.jpeg",
	"img/mbdtf.jpeg",
	"img/tc.jpeg",
	"img/tlop.jpeg",
	"img/tpab.jpeg",
	"img/uu.jpeg"
};

Glib::RefPtr<Gdk::Pixbuf> createPixbuf(const std::string& name) {
	return Gdk::Pixbuf::create_from_file(name);
}

AlbumBank::AlbumBank() {
	for (int i = 0; i < image_filenames.size(); i++) {
		album_images.push_back(createPixbuf(image_filenames[i]));
	}
}

AlbumBank::~AlbumBank() {

}

Glib::RefPtr<Gdk::Pixbuf> AlbumBank::getAlbumImage(int i) {
	if (i > -1 && i < image_filenames.size()) {
		return album_images.at(i);
	} else {
		throw "WTF: image index out of bounds";
	}
}

int AlbumBank::getAlbumCount() const {
	return album_images.size();
}