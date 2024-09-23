#include<iostream>
using namespace std;

int main(){
 int angka = 12, hasil;
 cout << "Input : " << angka << endl;
 cout << "Output : "<< endl;
 for(int i = 1; i <= 10; i++){
 	hasil = angka*i;
 	cout << angka << " x " << i <<" = "<< hasil << endl;
 }
 
}
