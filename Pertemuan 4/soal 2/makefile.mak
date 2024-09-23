soal2 : Nomor2.o
	g++ Nomor2.o -o soal2
	
Nomor2.o : Nomor2.cpp
	g++ -c Nomor2.cpp -o Nomor2.o
	
run : soal2
	./soal2
	
test2 : Nomor2_test.o
	g++ Nomor2_test.o -o test2
	
Nomor2_test.o : Nomor2_test.cpp
	g++ -c Nomor2_test.cpp -o Nomor2_test.o
	
test : test2
	./test2

clean :
	rm -f Nomor2.o soal2
	rm -f Nomor2_test.o test2
