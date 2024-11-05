#include<iostream>
using namespace std;

int main(){
	cout << "--Program Mencari Bilangan Terbesar dari Tiga Angka--\n\n\n";
	
	float a,b,c;
	cout << "Inputkan bilangan 1 : 10"<<endl;
	a = 10;
	cout << "Inputkan bilangan 2 : 17"<<endl;
	b = 17;
	cout << "Inputkan bilangan 3 : 11"<<endl;
	c = 11;
	if(a > b){
		if(a > c) cout << "Bilangan terbesar adalah : "<< a;
		else {
			cout << "Bilangan terbesar adalah : "<< c;
		}
	} else {
		if(b > c) cout << "Bilangan terbesar adalah : "<< b;
		else {
			cout << "Bilangan terbesar adalah : "<< c;
		}
	}

}
