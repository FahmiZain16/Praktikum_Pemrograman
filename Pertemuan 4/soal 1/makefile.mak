soal1 : Nomor1.o
	g++ Nomor1.o -o soal1
	
Nomor1.o : Nomor1.cpp
	g++ -c Nomor1.cpp -o Nomor1.o
	
run : soal1
	./soal1

test1 : Nomor1_test.o
	g++ Nomor1_test.o -o test1
	
Nomor1_test.o : Nomor1_test.cpp
	g++ -c Nomor1_test.cpp -o Nomor1_test.o
	
test : test1
	./test1 
	
clean :
	rm -f Nomor1.o soal1
	rm -f Nomor1_test.o test1
