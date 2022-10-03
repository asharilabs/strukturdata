#include <iostream>

using namespace std;

int main() {
		
	string nama;
	float tm1, tm2, uts, uas;
	float nilaiAkhir;

	cout << "nama: "; getline(cin, nama);
	cout << "tm1: "; cin >> tm1;
	cout << "tm2: "; cin >> tm2;
	cout << "uts: "; cin >> uts;
	cout << "uas: "; cin >> uas;

	nilaiAkhir =
		((10 * tm1) / 100) +
		((20 * tm2) / 100) +
		((30 * uts) / 100) +
		((40 * uas) / 100);

	cout << endl << 
		"REPORT NILAI AKHIR MAHASISWA" << endl;
	cout << "nama\t\t: " << nama << endl;
	cout << "tm1\t\t: " << tm1 << endl;
	cout << "tm2\t\t: " << tm2 << endl;
	cout << "uts\t\t: " << uts << endl;
	cout << "uas\t\t: " << uas << endl;
	cout << "nilai akhir \t: " << nilaiAkhir << endl;
	cout << "-------------------------" << endl;
	return 0;
}
