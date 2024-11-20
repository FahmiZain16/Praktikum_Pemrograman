#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

struct data_mhs{ // mendeklarasikan struct yang berisi data 7 siswa
	vector<long long> nisn= {9960312699, 9963959682, 9950310962, 
							9970272750, 9970293945, 9952382180, 9965653989};
	vector<string> nama = {"Handi Ramadhan" ,"Rio Alfandra", 
	"Ronaldo Valentino Uneputty", "Achmad Yaumil Fadjri R.", 
	"Alivia Rahma Pramesti", "Ari Lutfianto", "Arief Budiman"};
	vector<int> nilai = {90, 55, 80, 60, 70, 65, 60};
};

int main(){
	data_mhs id;
	cout << "\tsorting dengan metode insertion sort\t\n";
	cout << "\tsorting berdasarkan NISN\n" << endl;
	for(size_t i = 1; i < id.nisn.size(); i++){
		int j = i - 1;
		long long tempNISN = id.nisn[i];
		string tempNAMA = id.nama[i];
		int tempNILAI = id.nilai[i];
		while(id.nisn[j] > tempNISN &&  j >= 0){
			//menukar tempat
			id.nisn[j + 1] = id.nisn[j];
			id.nilai[j + 1] = id.nilai[j];
			id.nama[j + 1] = id.nama[j];
			j--;
		} 
		id.nisn[j + 1] = tempNISN;
		id.nama[j + 1] = tempNAMA;
		id.nilai[j + 1] = tempNILAI;
	}
	
    for (size_t i = 0; i < id.nisn.size(); i++) {
        cout << left << setw(15) << id.nisn[i]
             << setw(30) << id.nama[i]
             << right << setw(5) << id.nilai[i] << endl;
	}
	cout << endl;
	cout << "\tpencarian dengan metode binary search\n";
	cout << "\tmencari data dengan nisn 9950310962\n\n";
	bool found = false;
	int i = 0, j = id.nisn.size() - 1, k; 
	 long long query = 9950310962; //query adalah objek yang dicari
	while( i <= j){
		k = (i + j)/2;
		if(id.nisn[k] < query){
			i = k + 1;
		}else if(id.nisn[k] == query){
			found = true;
			break;
		} else {
			j = k - 1;
		}
	}
	if(!found) {
		cout << "tidak ditemukan";
	}
	else {
		cout << left << setw(15) << id.nisn[k]  << setw(30)  << id.nama[k] 
					<< right << setw(5) << id.nilai[k];
	}
	
	cout << endl;
	cout << endl;
	cout << "\tsorting berdasarkan nama\t\n" << endl;
	for(size_t i = 1; i < id.nama.size(); i++){
		long long tempNISN = id.nisn[i];
		string tempNAMA = id.nama[i];
		int tempNILAI = id.nilai[i];
		int j = i - 1;
		while( j >= 0 && id.nama[j] > tempNAMA){
			//menukar tempat
			id.nisn[j + 1] = id.nisn[j];
			id.nilai[j + 1] = id.nilai[j];
			id.nama[j + 1] = id.nama[j];
			j--;
		}
		id.nisn[j + 1] = tempNISN;
		id.nama[j + 1] = tempNAMA;
		id.nilai[j + 1] = tempNILAI;
	}
	
    for (size_t i = 0; i < id.nama.size(); i++) {
        cout << left << setw(15) << id.nisn[i]
             << setw(30) << id.nama[i]
             << right << setw(5) << id.nilai[i] << endl;
	}
	cout << endl;
	cout << "\tMengubah nama yang memiliki nilai 60 menjadi Joko\n";
	cout << "\tmenggunakan pencarian beruntun\n\n";
	for(size_t i = 0; i < id.nilai.size(); i++){
		//mencari secara beruntun
		if(id.nilai[i] == 60){
			//mengubah isi data
			id.nama[i] = "Joko";
		}
		cout << left << setw(15) << id.nisn[i]
             << setw(30) << id.nama[i]
             << right << setw(5) << id.nilai[i] << endl;
	}
}
