#include <iostream>>

using namespace std;

int main() {

	cout << "=============Program Biodata=============" << endl;
	string _namaDepan, _namaBelakang;
	string _namaJalan, _kelurahan, _kota;
	int _noRumah;
	int anakke, saudara;

	cout << "nama depan: "; cin >> _namaDepan;
	cout << "nama belakang: "; cin >> _namaBelakang;
	cout << "-------------" << endl;
	cout << "nama jalan: "; cin >> _namaJalan;
	cout << "no rumah (angkanya saja): "; cin >> _noRumah;
	cout << "kelurahan: "; cin >> _kelurahan;
	cout << "kota: "; cin >> _kota;
	cout << "-------------" << endl;
	cout << "anda adalah anak ke-: "; cin >> anakke;
	cout << "dari berapa saudara: "; cin >> saudara;

	cout << endl << "------------INPUT SELESAI------------" << endl;
	cout << "Data Diri----" << endl;
	cout << "Nama lengkap: " << _namaBelakang << " " << _namaBelakang << endl;
	cout << "Alamat rumah: " << _namaJalan << "No." << _noRumah <<
		", Kelurahan " << _kelurahan << ", Kota " << _kota << endl;
	cout << "Anak ke-" << anakke << ", dari " << saudara << " saudara" << endl;
	cout << "====================END OF PROGRAM====================" << endl;

	return 0;
}