CXX= g++
#CXXFLAGS = -g `/opt/local/bin/pkg-config gtkmm-2.4 --cflags --libs`
CXXFLAGS = -Wall -O -g `pkg-config gtkmm-2.4 --cflags --libs`
OBJS = buttons.o main.o
EXEC = buttons

$(EXEC): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(EXEC)

buttons.o: buttons.h buttons.cc
main.o: buttons.h main.cc

clean:
	rm -rf ${OBJS} ${EXEC}
