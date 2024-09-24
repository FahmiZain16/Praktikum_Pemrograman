#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<string> angka; //mendeklarasikan vektor bernama "angka"
	string input;
	cout<< "[ "; //memberikan batas awal sebelum menginput string
	while((cin >> input) && input != "]"){ //bebas memasukkan string, untuk memberikan batas maka diinput "]"
		angka.push_back(input); 			//agar program dapat dijalankan
	} //nama_vektor.push_back(sesuatu) memasukkan sesuatu ke bagian paling belakang vektor
	cout << "[ ";
	for(int i = angka.size()-1 ; i >= 0; i--) cout << angka[i] << " "; //membuat keluaran dengan urutan dari belakang
	cout << "]";
}
