#include<iostream>
#include<string>
using namespace std;

string name;
long long gross_salary, tax, net_salary;
long long installment = 200000;
long long insurance = 150000;

int main(){
	cout << "Payslip for Employee\n";
	cout << "----------------------" << endl;
	cout << "Input your name : ";
	getline(cin,name);
	cout << endl;
	cout << "Input your Gross Salary : ";
	cin >> gross_salary;
	cout << endl;
	cout <<"Name \t\t: "<< name << endl;
	cout <<"Gross Salary \t: Rp" << gross_salary << endl;
	tax = gross_salary/5;
	cout << "Tax (20%) \t: Rp" << tax << endl;
	cout << "Installment \t: Rp"<<installment << endl;
	cout << "Insurance \t: Rp" << insurance << endl;
	net_salary = gross_salary - tax - installment - insurance;
	cout << "Net Salary \t: Rp" << net_salary;
	
}
