soal1 : Nomor1.o
		g++ -o soal1 Nomor1.o
		
Nomor1.o : Nomor1.cpp
		g++ -c Nomor1.cpp
		
soal2 : Nomor2.o
		g++ -o soal2 Nomor2.o
		
Nomor2.o : Nomor2.cpp
		g++ -c Nomor2.cpp
		
clean:
	rm -f soal1 Nomor1.o 
	rm -f soal2 Nomor2.o 
