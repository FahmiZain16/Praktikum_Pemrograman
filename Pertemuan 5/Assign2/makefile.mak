soal2 : ReverseVektor.o
	g++ ReverseVektor.o -o soal2
	
ReverseVektor.o : ReverseVector.cpp
	g++ -c ReverseVector.cpp -o ReverseVektor.o
	
run : soal2
	./soal2
	
clean :
	del -f ReverseVektor.o soal2.exe
