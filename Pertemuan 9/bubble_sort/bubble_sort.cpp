#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

struct data_mhs{// mendeklarasikan struct yang berisi data 7 siswa
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
	
	cout << "\tsorting menggunakan metode bubble sort\n";
	cout << "\tsorting berdasarkan nisn\n\n";
	for(size_t i = 0; i < id.nisn.size() - 1; i++){
		for(size_t j = 0; j < id.nisn.size() - 1; j++){
			if(id.nisn[j] > id.nisn[j + 1]){
				//menukar tempat jika syarat terpenuhi
				tempNISN = id.nisn[j];
				id.nisn[j] = id.nisn[j + 1];
				id.nisn[j + 1] = tempNISN;
				
				tempNAMA = id.nama[j];
				id.nama[j] = id.nama[j + 1];
				id.nama[j + 1] = tempNAMA;
				
				tempNILAI = id.nilai[j];
				id.nilai[j] = id.nilai[j + 1];
				id.nilai[j + 1] = tempNILAI;
			}
		}
	}
	for (size_t i = 0; i < id.nisn.size(); i++) {
        cout << left << setw(15) << id.nisn[i]
             << setw(30) << id.nama[i]
             << right << setw(5) << id.nilai[i] << endl;
    }
    cout << endl;
    
    cout << "\tsorting berdasarkan nama\n\n";
	for(size_t i = 0; i < id.nama.size() - 1; i++){
		for(size_t j = 0; j < id.nama.size() - 1; j++){
			if(id.nama[j] > id.nama[j + 1]){
				//menukar tempat jika syarat terpenuhi
				tempNISN = id.nisn[j];
				id.nisn[j] = id.nisn[j + 1];
				id.nisn[j + 1] = tempNISN;
				
				tempNAMA = id.nama[ j];
				id.nama[j] = id.nama[j + 1];
				id.nama[j + 1] = tempNAMA;
				
				tempNILAI = id.nilai[j];
				id.nilai[j] = id.nilai[j + 1];
				id.nilai[j + 1] = tempNILAI;
			}
		}
	}
	for (size_t i = 0; i < id.nisn.size(); i++) {
        cout << left << setw(15) << id.nisn[i]
             << setw(30) << id.nama[i]
             << right << setw(5) << id.nilai[i] << endl;
    }
    
}
