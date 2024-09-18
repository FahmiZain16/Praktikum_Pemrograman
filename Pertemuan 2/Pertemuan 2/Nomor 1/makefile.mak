soal1 : Nomor_1.o
		g++ -o soal1 Nomor_1.o
		
Nomor1.o : Nomor_1.cpp
		g++ -c Nomor_1.cpp

run : soal1
	./soal1

clean:
	rm -f soal1 Nomor_1.o 

