#include <iostream>
#include <string.h>

using namespace std;

int main (){
	
	string username, password;
	
	cout << "Masukkan Username : ";
	cin >> username;
	cout << "Masukkan Password : ";
	cin >> password;
	
	if (username == "admin" && password == "admin"){
		cout << "Anda adalah ADMIN" << endl;
	}else{
		cout << "Anda BUKAN ADMIN" << endl;
	}
	
	return 0;
}
