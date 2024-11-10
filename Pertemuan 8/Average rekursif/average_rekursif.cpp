#include<bits/stdc++.h>
using namespace std;
int ar[1000]; // mendeklarasikan array sebagai variabel global
int expected_output;


int sum(int n , int ar[]){ //fungsi rekursif dengan dua parameter, yaitu n dan array 
								//untuk menghitung jumlah seluruh elemen array
	if(n == 0){
		return 0; }//memberikan batasan
	else {
		return ar[n-1] +  sum(n - 1, ar); 
		}//memanggil fungsi kembali dengan n yang berkurang 1
}

int avg(int sum , int n){
	return sum/n; //fungsi untuk menghitung rata-rata
}

int main(){
	
	//n adalah banyaknya bilangan yang akan dimasukkan
	int n;	
	//cin >> n;
	//for(int i = 0; i < n; i++) cin >> ar[i]; //memasukkan bilangan sebanyak n
	//cout << avg(sum(n , ar) , n); //memanggil fungsi dalam fungsi
	
	//test 1
	n = 5;
	int br[5] = {3, 1, 7, 9, 10};
	expected_output = 6;
	cout << "test 1 : n = 5; input = 3 1 7 9 10; expected output = 6\n";
	cout << "output = " << avg(sum(n , br) , n) << endl;
	if(avg(sum(n , br) , n) == expected_output ) cout << "test 1 passed\n";
	else cout << "test 1 failed\n";
	
	//test 2
	n = 7;
	int cr[7] = {12, 10, 11, 9, 7, 7, 28};
	expected_output = 12;
	cout << "test 2 : n = 7; input = 12 10 11 9 7 7 28; expected output = 12\n";
	cout<< "output = " << avg(sum(n , cr) , n) << endl;
	if(avg(sum(n , cr) , n) == expected_output ) cout << "test 2 passed\n";
	else cout << "test 2 failed\n";
	
	//test 3
	n = 4;
	int dr[4] = {21 , 13 , 41, 29};
	expected_output = 26;
	cout << "test 3 : n = 4; input = 21 13 41 29; expected output = 26\n";
	cout << "output = " << avg(sum(n , dr) , n) << endl;
	if(avg(sum(n , dr) , n) == expected_output ) cout << "test 3 passed\n";
	else cout << "test 3 failed\n";
	
	
	
	
}
