CXX = g++
CXXFLAGS = -Wall
TARGET = hitung_ganjil_genap
SRC = hitung_ganjil_genap.cpp

all : $(TARGET)

$(TARGET) : $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test : $(TARGET)
	./$(TARGET)

clean :
	rm -f $(TARGET) 

.PHONY : all clean test
