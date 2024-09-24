soal1 : Vektor_FizzBuzz.o
	g++ Vektor_FizzBuzz.o -o soal1
	
Vektor_FizzBuzz.o : Vektor_FizzBuzz.cpp
	g++ -c Vektor_FizzBuzz.cpp -o Vektor_FizzBuzz.o
	
run : soal1
	./soal1
	
clean :
	rm -f Vektor_FizzBuzz.o soal1.exe
