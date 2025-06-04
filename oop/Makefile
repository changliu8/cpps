# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Source and object files
SRC = main.cpp Hero.cpp Pirate.cpp Person.cpp
OBJ = $(SRC:.cpp=.o)

# Executable name
TARGET = game

# Default target
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)