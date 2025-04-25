#include <iostream>
#include <string.h>

using namespace std;

int main (){
	
	char A[15];
	char B[15];
	
	cout << "Masukkan Kata 1 : ";
	cin >> A;
	cout << "Masukkan Kata 2 : ";
	cin >> B;
	
	if (strcmp(A,B) == 0){
		cout << "Kata 1 dan Kata 2 Sama" << endl;
	}else{
		cout << "Kata 1 dan Kata 2 Tidak Sama" << endl;
	}
	
	return 0;
}
