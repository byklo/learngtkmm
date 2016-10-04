CXX= g++
#CXXFLAGS = -g `/opt/local/bin/pkg-config gtkmm-2.4 --cflags --libs`
CXXFLAGS = -Wall -O -g `pkg-config gtkmm-2.4 --cflags --libs`
OBJS1 = card.o main.o
EXEC1 = card

$(EXEC1): $(OBJS1)
	$(CXX) $(OBJS1) $(CXXFLAGS) -o $(EXEC1)

card.o: card.h card.cc
main.o: card.h main.cc

clean:
	rm -rf ${EXEC1} ${OBJS1}
