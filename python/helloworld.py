import gi
gi.require_version("Gtk", "3.0")
from gi.repository import Gtk

class MyWindow(Gtk.Window):
	def __init__(self):
		Gtk.Window.__init__(self, title="lol.exe")
		self.set_default_size(120, 50)
		self.button = Gtk.Button(label = "click dis")
		self.button.connect("clicked", self.on_button_clicked)
		self.add(self.button)
	
	def on_button_clicked(self, widget):
		print("hahahaha")

win = MyWindow()
win.connect("delete-event", Gtk.main_quit)
win.show_all()
Gtk.main()
