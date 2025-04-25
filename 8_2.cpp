#include <iostream>

using namespace std;

int main (){
	
	string kata;
	
	cout << "Masukkan kata = HALO" << endl;
	cin >> kata;
	
	if (kata == "HALO"){
		cout << "Kata yang dimasukkan SESUAI" << endl;
	}else {
		cout << "Kata yang dimasukkan TIDAK SESUAI" << endl;
	}
}
