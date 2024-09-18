soal1 : Nomor1.o
		g++ Nomor1.o -o soal1
		
Nomor1.o : Nomor1.cpp
		g++ -c Nomor1.cpp Nomor1.o
		
run : soal1
	./soal1
			
clean:
	del -f Nomor1.o soal1

