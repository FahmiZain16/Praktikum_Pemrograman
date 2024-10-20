#include <iostream>
#include <string>
using namespace std;

const int MAX_BARANG = 50;  // Batas maksimum jumlah barang

struct DataBarang {
    string kode;
    string nama;
    int harga;
    int jumlah;
};

// Fungsi untuk input data barang dari pengguna
void inputBarang(DataBarang barang[], int n) {
    cout << "\n--- Input Data Barang ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Barang ke-" << (i + 1) << ":\n";
        cout << "Kode Barang: ";
        cin >> barang[i].kode;
        cin.ignore();  // Membersihkan buffer
        cout << "Nama Barang: ";
        getline(cin, barang[i].nama);  // Menerima input dengan spasi
        cout << "Harga Barang: ";
        cin >> barang[i].harga;
        cout << "Jumlah Barang: ";
        cin >> barang[i].jumlah;
        cout << endl;
    }
}

// Fungsi untuk menghitung total jumlah barang dan rata-rata harga
void hitungDanTampilkan(DataBarang barang[], int n, int exo1, int exo2) {
    int totalJumlah = 0;
    double totalHarga = 0.0;

    for (int i = 0; i < n; i++) {
        totalJumlah += barang[i].jumlah;
        totalHarga += barang[i].harga * barang[i].jumlah;
    }

    double average = totalHarga / totalJumlah;  // Menghitung rata-rata harga

    cout << "--- Hasil Perhitungan ---\n";
    cout << "Total Jumlah Barang: " << totalJumlah << endl;
    cout << "Rata-Rata Harga Barang: " << average << endl;
    
    //program untuk mengetes apakah output sesuai dengan expected output
    if((totalJumlah == exo1) && (average == exo2)){
    	cout << "Passed";
	} else {
		cout << "failed";
	}
}

int main() {
    //int n, exo1, exo2;

    // Input jumlah barang (maksimal 50)
    //cout << "Masukkan jumlah jenis barang (maks 50): ";
    //cin >> n;
    //if (n > MAX_BARANG || n < 1) {
        //cout << "Jumlah barang tidak valid!" << endl;
        //return 1;  // Keluar dari program jika input tidak valid
    //}

    DataBarang barang[MAX_BARANG];

    // Meminta input dari pengguna
    //inputBarang(barang, n);

    // Menampilkan hasil perhitungan
    //hitungDanTampilkan(barang, n, exo1, exo2);

    // Test 1: Barang 2 jenis
    DataBarang test1[2] = {
        {"K001", "Sabun", 5000, 10},
        {"K002", "Shampoo", 14000, 5}
    };
    cout << "\nTest 1:\n";
    hitungDanTampilkan(test1, 2, 15, 8000);

    // Test 2: Barang 3 jenis
    DataBarang test2[3] = {
        {"K003", "Beras", 12000, 7},
        {"K004", "Minyak", 18000, 1},
        {"K005", "Gula", 10000, 8}
    };
    cout << "\nTest 2:\n";
    hitungDanTampilkan(test2, 3, 16, 11375);

    // Test 3: Barang 1 jenis dengan jumlah besar
    DataBarang test3[1] = {
        {"K006", "Susu", 25000, 50}
    };
    cout << "\nTest 3:\n";
    hitungDanTampilkan(test3, 1, 50, 25000);

    return 0;
}

