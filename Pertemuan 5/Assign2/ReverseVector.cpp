#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<string> angka;
	string input;
	cout<< "[ ";
	while((cin >> input) && input != "]"){
		angka.push_back(input);
	}
	cout << "[ ";
	for(int i = angka.size()-1 ; i >= 0; i--) cout << angka[i] << " ";
	cout << "]";
}
