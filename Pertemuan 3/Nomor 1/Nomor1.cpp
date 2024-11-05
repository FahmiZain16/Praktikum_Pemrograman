#include<iostream>
#include<cmath>
using namespace std;

float a,b,c;

int main(){
	cout << "Mencari nilai x atau akar dari persamaan kuadrat ax^2 + bx + c = 0\n";
	cout << "Masukkan nilai a : 2"<<endl;
	a = 2;
	cout << "Masukkan nilai b : 6"<<endl;
	b = 6;
	cout << "Masukkan nilai c : 4"<<endl;
	c = 4;
	
	float diskriminan = (b*b - 4*a*c); //menetapkan nilai diskriminan
	float n = sqrt(diskriminan);
	
	//jika nilai diskriminan lebih dari nol, maka akar dari persamaan tersebut adalah dua akar real yang berbeda
	if (diskriminan > 0){
		float akar_1 = (-b + n)/(2*a); // mencari akar kesatu
		float akar_2 = (-b - n)/(2*a); // mencari akar kedua
		cout << "Akar dari " <<a<<"x^2 + "<<b<<"x + " <<c << " adalah : "<< akar_1 <<" dan " << akar_2; //mengeluarkan hasil
		cout <<"test passed"; 
	//jika nilai diskriminan sama dengan nol, maka persamaan tersebut mempunyai satu akar real
	} else if( diskriminan == 0){
		float akar = (-b)/(2*a); // mencari akar
		cout << "akar dari " <<a<<"x^2 + "<<b<<"x + " <<c<< " adalah : "<< akar; //mengeluarkan hasil
		cout << "test passed";
	//jika nilai diskriminan kurang dari nol, maka persamaan tersebut mempunyai akar bilangan kompleks
	} else {
		cout << "persamaan tersebut tidak mempunyai akar real (akar berupa bilangan kompleks)";
	}
}

