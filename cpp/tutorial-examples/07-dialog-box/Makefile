CXX= g++
#CXXFLAGS = -g `/opt/local/bin/pkg-config gtkmm-2.4 --cflags --libs`
CXXFLAGS = -Wall -O -g `pkg-config gtkmm-2.4 --cflags --libs`
OBJS = colour.o DialogBox.o main.o
EXEC = colour

$(EXEC): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(EXEC)

colour.o: colour.h colour.cc
main.o: colour.h main.cc
DialogBox.o: DialogBox.h DialogBox.cc

clean:
	rm -rf ${OBJS} ${EXEC}
