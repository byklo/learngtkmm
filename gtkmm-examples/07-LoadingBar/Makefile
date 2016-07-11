CXX= g++
#CXXFLAGS = -g `/opt/local/bin/pkg-config gtkmm-2.4 --cflags --libs`
CXXFLAGS = -Wall -O -g `pkg-config gtkmm-2.4 --cflags --libs`

Loading: loadingwindow.o main.o
	$(CXX) loadingwindow.o main.o $(CXXFLAGS) -o loading

clean:
	rm loadingwindow.o main.o loading
