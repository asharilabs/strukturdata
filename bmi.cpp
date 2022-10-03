#include <iostream>

using namespace std;

int main() {
		
	// BMI
	char gender; // p ato l
	float tinggi;
	float berat;
	float BMI;
	
	cout << "gender: "; cin >> gender;
	cout << "tinggi (m): "; cin >> tinggi;
	cout << "berat (kg): "; cin >> berat;

	float kuadratTinggi = tinggi * tinggi;
	BMI = berat / kuadratTinggi;

	cout << endl;
	cout << "RESULT-----------------" << endl;
	cout << "tinggi badan: " << tinggi << " meter" << endl;
	cout << "berat badan: " << berat << " kg" << endl;
	cout << "Gender: " << gender << endl;
	cout << "BMI: " << BMI << endl;

	return 0;
}
