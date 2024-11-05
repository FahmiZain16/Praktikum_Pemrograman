# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Nomor2
SRC = Nomor2.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the Nomor2.cpp
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
