#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
	vector<string> bilangan;
	for (int i = 1; i <= 100; i++){
	if( i % 15 == 0){
		bilangan.push_back("FizzBuzz");
	} else if( i % 3 == 0){
		bilangan.push_back("Fizz");
	} else if( i % 5 == 0){
		bilangan.push_back("Buzz");
	} else {
		bilangan.push_back(to_string(i));
	}
		}
	for (const string& s : bilangan){
		cout << s <<endl;
	}
}
