#include<iostream>
using namespace std;

int main(){
 int angka, hasil;
 cout << "Input : ";
 cin >> angka;
 cout << "Output : "<< endl;
 for(int i = 1; i <= 10; i++){
 	hasil = angka*i;
 	cout << angka << " x " << i <<" = "<< hasil << endl;
 }
 
}
