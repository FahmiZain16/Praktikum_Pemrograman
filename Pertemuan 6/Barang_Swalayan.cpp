#include<bits/stdc++.h>
using namespace std;

struct data{
		string kode;
		string nama;
		int harga;
		int jumlah;
	};
	
int main(){
	int n;
	cout << "Masukkan banyak jenis barang : "; 
	cin >> n; //memasukkan banyaknya jenis barang yang akan diinput
	cout << endl;
	data barang[50];
	for(int i = 0; i < n; i++){
		cout << "Masukkan kode barang : ";
		cin >> barang[i].kode; //memasukkan kode barang yang berupa string
		cout << "Masukkan nama barang : ";
		cin.ignore();
		getline(cin, barang[i].nama); //memasukkan nama barang berupa string, nama barang bisa diberi spasi
		cout << "Masukkan harga barang : "; 
		cin >> barang[i].harga; //memasukkan harga barang tiap satuan
		cout << "Masukkan jumlah barang : ";
		cin >> barang[i].jumlah; //memasukkan jumlah barang
		cout << endl;
	}
	double sum = 0, total = 0;
	double average; // menggunakan tipe data double untuk menghitung rata-rata yang bersifat pecahan
	
	for(int i = 0; i < n; i++){
		sum += barang[i].jumlah; //menghitung jumlah barang keseluruhan
		total += barang[i].harga * barang[i].jumlah; //menghitung total harga barang keseluruhan
	}
	
	average = total / sum; // menghitung rata-rata harga barang tiap satuan
	cout << "Total jumlah barang : " << sum << endl; //mengeluarkan jumlah barang keseluruhan
	cout << "Rata-rata harga barang : " << average; //mengeluarkan rata-rata harga barang tiap satuan
	
}
