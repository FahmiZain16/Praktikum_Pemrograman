soal2 : Nomor_2.o
		g++ -o soal2 Nomor_2.o
		
Nomor_2.o : Nomor_2.cpp
		g++ -c Nomor_2.cpp

run : soal2
	./soal2		
clean:
	rm -f soal2 Nomor_2.o 
