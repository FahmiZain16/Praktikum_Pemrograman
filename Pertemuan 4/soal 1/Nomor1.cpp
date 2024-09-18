#include<iostream>
using namespace std;

int main(){
	int angka,sum = 0;
	cout << "Input : ";
	cin>>angka;
	for(int i = 1; i <= angka; i++){
		sum += i;
	}
	cout << "Output : sum = "<< sum;
}
