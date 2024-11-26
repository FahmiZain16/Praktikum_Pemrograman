#include<iostream>
using namespace std;

int main(){
	cout << "test case dengan daftar array sebagai berikut : \n\n";
	cout << "bil1[10] = {12, 35, 42, 12, 23, 46, 39, 18, 51, 19};\n";
	cout << "expected output ganjil = 167 , genap = 130\n\n";
	cout << "bil2[7] = {0, 23, 19, 11, 37};\n";
	cout << "expected output ganjil = 90 , genap = 0\n\n";
	cout << "bil3[5] = {10, 1, 24, 6, 99};\n";
	cout << "expected output ganjil = 100 , genap = 40\n\n";
	
	int bil1[10] = {12, 35, 42, 12, 23, 46, 39, 18, 51, 19};
	int bil2[7] = {0, 23, 19, 11, 37};
	int bil3[5] = {10, 1, 24, 6, 99};
	
	int sum_ganjil1 = 0;
	int sum_genap1 = 0;
	for(int i = 0; i < 10; i++){
		if(bil1[i] % 2 == 0){
			sum_genap1 += bil1[i];
		}
		else {
			sum_ganjil1 += bil1[i];
		}
	}
	cout << "tes 1\n";
	cout << "jumlah dari bilangan ganjil adalah " << sum_ganjil1 << endl;
	cout << "jumlah dari bilangan genap adalah " << sum_genap1 << endl;
	
	
	int sum_ganjil2 = 0;
	int sum_genap2 = 0;
	for(int i = 0; i < 7; i++){
		if(bil2[i] % 2 == 0){
			sum_genap2 += bil2[i];
		}
		else {
			sum_ganjil2 += bil2[i];
		}
	}
	cout << "tes 2\n";
	cout << "jumlah dari bilangan ganjil adalah " << sum_ganjil2 << endl;
	cout << "jumlah dari bilangan genap adalah " << sum_genap2 << endl;
	
	
	int sum_ganjil3 = 0;
	int sum_genap3 = 0;
	for(int i = 0; i < 5; i++){
		if(bil3[i] % 2 == 0){
			sum_genap3 += bil3[i];
		}
		else {
			sum_ganjil3 += bil3[i];
		}
	}
	cout << "tes 3\n";
	cout << "jumlah dari bilangan ganjil adalah " << sum_ganjil3 << endl;
	cout << "jumlah dari bilangan genap adalah " << sum_genap3 << endl;
}
