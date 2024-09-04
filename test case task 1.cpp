#include<iostream>
#include<string>
using namespace std;

string name;
long long gross_salary, tax, net_salary;
long long installment;
long long insurance;

int main(){
		//Memberikan judul untuk slip gaji karyawan
	cout << "Payslip for Employee\n";
	cout << "--------------------------------" << endl;
	
	//hasil keluaran adalah sebagai berikut : 
	cout <<"Name \t\t: ";
	getline(cin, name); //memasukkan nama karyawan
	cout <<"Gross Salary \t: Rp";
	cin >> gross_salary; "\n"; //memasukkan gaji kotor karyawan
	tax = gross_salary/5; // melakukan perhitungan pajak sebesar 20% dari gaji kotor
	cout << "Tax (20%) \t: Rp" << tax << endl; //mengeluarkan pajak yang akan memotong gaji
	cout << "Installment \t: Rp";
	cin >> installment; //memasukkan biaya cicilan yang bersifat tetap
	cout << "Insurance \t: Rp"; 
	cin >> insurance;//memasukkan biaya asuransi yang bersifat tetap
	net_salary = gross_salary - tax - installment - insurance; // perhitungan gaji bersih => gaji kotor - pajak - cicilan - biaya asuransi
	cout << "Net Salary \t: Rp" << net_salary; //mengeluarkan gaji bersih yang diterima karyawan
	
}
