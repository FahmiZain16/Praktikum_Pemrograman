#include<iostream>
#include<string>
using namespace std;

string name;
long long gross_salary, tax, net_salary;
long long installment = 200000;
long long insurance = 150000;

int main(){
	
	//memasukkan nama lengkap karyawan
	cout << "Input your name : ";
	getline(cin,name);
	cout << endl;
	
	//memasukkan gaji bruto atau gaji kotor
	cout << "Input your Gross Salary : ";
	cin >> gross_salary;
	cout << endl;
	
		//Memberikan judul untuk slip gaji karyawan
	cout << "Payslip for Employee\n";
	cout << "----------------------" << endl;
	
	//hasil keluaran adalah sebagai berikut : 
	cout <<"Name \t\t: "<< name << endl; //mengeluarkan nama karyawan
	cout <<"Gross Salary \t: Rp" << gross_salary << endl; //mengeluarkan gaji kotor karyawan
	tax = gross_salary/5; // melakukan perhitungan pajak sebesar 20% dari gaji kotor
	cout << "Tax (20%) \t: Rp" << tax << endl; //mengeluarkan pajak yang akan memotong gaji
	cout << "Installment \t: Rp"<<installment << endl; //mengeluarkan biaya cicilan yang bersifat tetap
	cout << "Insurance \t: Rp" << insurance << endl; //mengeluarkan biaya asuransi yang bersifat tetap
	net_salary = gross_salary - tax - installment - insurance; // perhitungan gaji bersih => gaji kotor - pajak - cicilan - biaya asuransi
	cout << "Net Salary \t: Rp" << net_salary; //mengeluarkan gaji bersih yang diterima karyawan
	
}
