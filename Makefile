
CXX      = g++
CXXFLAGS = -std=c++11 -Wall -Iinc     


TARGET = Lab07

SRC    = main.cpp src/Cylinder.cpp
OBJ    = main.o   src/Cylinder.o


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^


main.o: main.cpp inc/Cylinder.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

src/Cylinder.o: src/Cylinder.cpp inc/Cylinder.h
	$(CXX) $(CXXFLAGS) -c $< -o $@


.PHONY: run clean

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
