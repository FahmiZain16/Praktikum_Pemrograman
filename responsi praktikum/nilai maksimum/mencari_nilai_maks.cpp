#include<iostream>
using namespace std;

int main(){
	
	cout << "test case dengan daftar array sebagai berikut : \n\n";
	cout << "bil1[10] = {12, 35, 42, 12, 23, 46, 39, 18, 51, 19};\n";
	cout << "expected output 51\n\n";
	cout << "bil2[7] = {0, 23, 19, 11, 37};\n";
	cout << "expected output 37\n\n";
	cout << "bil3[5] = {10, 1, 24, 6, 99};\n";
	cout << "expected output 99\n\n";
	
	int bil1[10] = {12, 35, 42, 12, 23, 46, 39, 18, 51, 19};
	int bil2[7] = {0, 23, 19, 11, 37};
	int bil3[5] = {10, 1, 24, 6, 99};
	int max1 = 0;
	for(int i = 0; i < 10; i ++){
		if(bil1[i] > max1){
			max1 = bil1[i];
		}
	}
	cout << "Bilangan terbesar dari daftar array pertama adalah " << max1 << endl;
	
	
	int max2 = 0;
	for(int i = 0; i < 7; i ++){
		if(bil2[i] > max2){
			max2 = bil2[i];
		}
	}
	cout << "Bilangan terbesar dari daftar array kedua adalah " << max2 << endl;
	
	
int max3 = 0;
	for(int i = 0; i < 5; i ++){
		if(bil3[i] > max3){
			max3 = bil3[i];
		}
	}
	cout << "Bilangan terbesar dari daftar array ketiga adalah " << max3 << endl;
}
