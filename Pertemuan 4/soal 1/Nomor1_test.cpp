#include<iostream>
using namespace std;

int main(){
	int angka = 10,sum = 0;
	cout << "Input : " << angka << endl;
	for(int i = 1; i <= angka; i++){
		sum += i;
	}
	cout << "Output : sum = "<< sum;
}
