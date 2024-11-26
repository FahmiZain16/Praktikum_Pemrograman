CXX = g++
CXXFLAGS  = -Wall
TARGET = mencari_nilai_maks
SRC = mencari_nilai_maks.cpp

all : $(TARGET)

$(TARGET) : $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test : $(TARGET)
	./$(TARGET)

clean :
	rm -f $(TARGET) 

.PHONY : all clean test
