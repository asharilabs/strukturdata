#include <iostream>

using namespace std;

int main() {
		
	// luas segitiga
	float alas, tinggi;

	cout << "input alas: "; cin >> alas;
	cout << "input tinggi: "; cin >> tinggi;

	float luas = (alas * tinggi) / 2;

	cout << endl << "maka luas segitiga tersebut adalah " <<
		luas << endl << " satuan luas" << endl;

	return 0;
}
