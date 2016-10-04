CXX= g++
#CXXFLAGS = -g `/opt/local/bin/pkg-config gtkmm-2.4 --cflags --libs`
CXXFLAGS = -Wall -O -g `pkg-config gtkmm-2.4 --cflags --libs`
OBJS = hello.o main.o
EXEC = hello

$(EXEC): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(EXEC)

hello.o: hello.h hello.cc
main.o: hello.h main.cc

clean:
	rm -rf ${OBJS} ${EXEC}
