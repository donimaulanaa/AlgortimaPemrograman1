#include <iostream>
#include <string.h>

using namespace std;

int main (){
	
	int n;
	
	cout << "Masukkan bilangan : ";
	cin >> n;
	
	if (n % 2 == 0) {
		cout << n << " Adalah Bilangan Genap" << endl;
	}else {
		cout << n << " Adalah Bilangan Ganjil" << endl;
	}
	
	return 0;
}
