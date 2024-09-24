#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
	vector<string> bilangan;//mendeklarasikan vektor bernama "bilangan"
	for (int i = 1; i <= 100; i++){//menginisiasi anggota vektor dari 1 sampai 100
	
	//memberikan syarat untuk mengisi bilangan dengan string
	//nama_vektor.push_back(sesuatu) memasukkan sesuatu ke bagian paling belakang vektor
		
	if( i % 15 == 0){ // jika i merupakan kelipatan 3 dan 5, akan menyimpan kata "FizzBuzz"
		bilangan.push_back("FizzBuzz");
	} else if( i % 3 == 0){ //jika i merupakan kelipatan 3, akan menyimpan kata "Fizz"
		bilangan.push_back("Fizz");
	} else if( i % 5 == 0){//jika i merupakan kelipatan 5, akan menyimpan kata "Buzz"
		bilangan.push_back("Buzz");
	} else {//jika i tidak termasuk kelipatan 3 atau 5, akan menyimpan string dari i
		bilangan.push_back(to_string(i));
	}
		}
	for (const string& s : bilangan){
		cout << s <<endl; //membuat keluaran setiap anggota vektor bilangan
	}
}
