# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = average_rekursif
SRC = average_rekursif.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the file .cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program in test mode
test: $(TARGET)
	./$(TARGET) 

# Clean up the compiled files
clean :
	rm -f $(TARGET)


# Phony targets to avoid conflicts
.PHONY: all clean test
