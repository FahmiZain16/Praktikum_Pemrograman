soal2 : Nomor2.o
	g++ Nomor2.o -o soal2
	
Nomor2.o : Nomor2.cpp
	g++ -c Nomor2.cpp -o Nomor2.o
	
run : soal2
	./soal2
	
clean :
	rm -f Nomor2.o soal2
