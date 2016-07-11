CXX = clang++
CXXFLAGS = -std=c++11 -Qunused-arguments `pkg-config --cflags --libs gtkmm-3.0`
OBJECTS = main.o RapperWindow.o
DEPENDS = ${OBJECTS:.o=.d}
EXEC = rapper

${EXEC} : ${OBJECTS}
	${CXX} ${OBJECTS} -o ${EXEC} ${CXXFLAGS}

clean :
	rm -v ${DEPENDS} ${OBJECTS} ${EXEC}

-include ${DEPENDS}
