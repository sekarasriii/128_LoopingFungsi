#include <iostream>
using namespace std;

int main() {
	
	int i;

	for (i = 0; i < 6; i++) {
		cout << i + 1 << "." << "Nama saya adalah Sekar" << endl;
	}

	string arr[5];

	for (i = 0; i < 5; i++) {
		cout << "Masukkan nickname ke " << i + 1 << " = ";
		cin >> arr[i];
	}

	for (i = 0; i < 5; i++) {
		cout << "Namanya adalah = " << arr[i] << endl;
	}
}