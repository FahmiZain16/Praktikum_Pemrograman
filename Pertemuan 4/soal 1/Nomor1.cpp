#include<iostream>
using namespace std;

int main(){
	int angka,sum = 0;
	cout << "Masukkan angka : ";
	cin>>angka;
	for(int i = 1; i <= angka; i++){
		sum += i;
	}
	cout << "Hasil penjumlahan : "<< sum;
}
