#pragma once

#include <gdkmm/pixbuf.h>
#include <vector>

class AlbumBank {
public:
	AlbumBank();
	virtual ~AlbumBank();
	Glib::RefPtr<Gdk::Pixbuf> getAlbumImage(int i);
	int getAlbumCount() const;
private:
	std::vector<Glib::RefPtr<Gdk::Pixbuf>> album_images;
};