soal2 : Nomor2.o
		g++ -o soal2 Nomor2.o
		
Nomor2.o : Nomor2.cpp
		g++ -c Nomor2.cpp
		
clean:
	rm -f soal2 Nomor2.o 
