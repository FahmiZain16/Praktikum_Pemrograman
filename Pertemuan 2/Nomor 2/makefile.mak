soal2 : Nomor_2.o
		g++ -o soal2 Nomor_2.o
		
Nomor_2.o : Nomor_2.cpp
		g++ -c Nomor_2.cpp
		
clean:
	rm -f soal2 Nomor_2.o 
