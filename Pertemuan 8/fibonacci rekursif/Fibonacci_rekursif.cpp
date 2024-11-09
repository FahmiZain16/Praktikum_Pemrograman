#include<bits/stdc++.h>
using namespace std;

long long fibonacci(long long indeks){
	if( indeks == 0 ) return 0; //bilangan fibonacci ke nol
	else if(indeks == 1) return 1; //bilangan fibonacci pertama
	else return fibonacci(indeks - 1) + fibonacci(indeks - 2); //fungsi reskursif
}																//yang menjumlahkan dua elemen sebelumnya
//bil fibonacci = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, dll dengan indeks dimulai dari nol
int main(){
	long long n; 
	//cin >> n;
	//cout <<fibonacci(n); //memanggil bilangan fibonacci ke-n
	
	//test 1
	n = 6;
	long long expected_output = 8;
	if(fibonacci(n) == expected_output) cout << "test 1 passed\n";
	else cout << "test 1 failed\n";
	
	//test 2
	n = 9;
	expected_output = 34;
	if(fibonacci(n) == expected_output) cout << "test 2 passed\n";
	else cout << "test 2 failed\n";
	
	//test 3
	n = 20;
	expected_output = 6765;
	if(fibonacci(n) == expected_output) cout << "test 3 passed\n";
	else cout << "test 3 failed\n";
}
