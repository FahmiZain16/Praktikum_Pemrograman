soal1 : Barang_Swalayan.o
	g++ Barang_swalayan.o -o soal1
	
Barang_Swalayan.o : Barang_Swalayan.cpp
	g++ -c Barang_Swalayan.cpp -o Barang_Swalayan.o
	
test : soal1
	./soal1
	
clean :
	del -f Barang_Swalayan.o soal1.exe
