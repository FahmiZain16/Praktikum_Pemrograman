#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

struct data_mhs{ // mendeklarasikan struct yang berisi data 7 siswa
	vector<long long> nisn = {9960312699, 9963959682, 9950310962,
							9970272750, 9970293945, 9952382180, 9965653989};
	vector<string> nama = {"Handi Ramadhan" ,"Rio Alfandra", 
						"Ronaldo Valentino Uneputty", "Achmad Yaumil Fadjri R.",
						"Alivia Rahma Pramesti", "Ari Lutfianto", "Arief Budiman"};
	vector<int> nilai = {90, 55, 80, 60, 70, 65, 60};
};

int main(){
	data_mhs id;
	long long tempNISN;
	int tempNILAI;
	string tempNAMA;
	
	cout << "\tsorting menggunakan metode selection sort\n";
	cout << "\tsorting berdasarkan nisn\n\n";
	
	//mengurutkan secara ascending
	for(size_t i = 0; i < id.nisn.size() - 1; i++){
		int min = i;
		for(size_t j = i + 1; j < id.nisn.size(); j++){
			if( id.nisn[j] < id.nisn[min]){ 
				min = j;
			}
		} //menukar tempat
			tempNISN = id.nisn[i];
			id.nisn[i] = id.nisn[min];
			id.nisn[min] = tempNISN;
			
			tempNAMA = id.nama[i];
			id.nama[i] = id.nama[min];
			id.nama[min] = tempNAMA;
			
			tempNILAI = id.nilai[i];
			id.nilai[i] = id.nilai[min];
			id.nilai[min] = tempNILAI;
	}
	//mengeluarkan data yang telah diurutkan
	for (size_t i = 0; i < id.nisn.size(); i++) {
        cout << left << setw(15) << id.nisn[i]
             << setw(30) << id.nama[i]
             << right << setw(5) << id.nilai[i] << endl;
    }
    cout << endl;
    
    cout << "\tsorting berdasarkan nama\n\n";
    //mengurutkan secara ascending
	for(size_t i = 0; i < id.nisn.size() - 1; i++){
		int min = i;
		for(size_t j = i + 1; j < id.nama.size(); j++){
			if( id.nama[j] < id.nama[min]){
				min = j;
			}
		} //menukar tempat
			tempNISN = id.nisn[i];
			id.nisn[i] = id.nisn[min];
			id.nisn[min] = tempNISN;
			
			tempNAMA = id.nama[i];
			id.nama[i] = id.nama[min];
			id.nama[min] = tempNAMA;
			
			tempNILAI = id.nilai[i];
			id.nilai[i] = id.nilai[min];
			id.nilai[min] = tempNILAI;
	}
	//mengeluarkan data yang telah diurutkan
	for (size_t i = 0; i < id.nama.size(); i++) {
        cout << left << setw(15) << id.nisn[i]
             << setw(30) << id.nama[i]
             << right << setw(5) << id.nilai[i] << endl;
    }
    
}
