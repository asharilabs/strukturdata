// Pemdas_Condition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

/// <summary>
/// Kasus menghitung nilai bmi, kemudian melakukan rekap
/// dari sisi gender l-->laki-laki dan p-->perempuan
/// </summary>
void Kasus1() {

    float berat;
    float tinggi;
    char gender; // l, p

    cout << "input berat (kg): "; cin >> berat;
    cout << "input tinggi (m): "; cin >> tinggi;
    cout << "input gender (l/p): "; cin >> gender;

    float bmi = berat / (tinggi * tinggi);

    cout << endl;
    cout << "Rekap Body Mass Index" << endl;
    cout << "Tinggi Badan\t: " << tinggi << " meter" << endl;
    cout << "Berat Badan\t: " << berat << " kilogram" << endl;

    if (gender == 'l') {
        cout << "Jenis Kelamin\t: Laki-Laki" << endl;
    }
    else {
        cout << "Jenis Kelamin\t: Perempuan" << endl;
    }

    cout << "nilai bmi: " << bmi << endl;    
}

/// <summary>
/// Kasus menghitung diskon, jika total belanja lebih dari 50.000
/// maka mendapat diskon 30%. Namun jika kurang maka tidak mendapat diskon
/// </summary>
void Kasus2() {

    int totalBelanja;
    float belanjadiskon;
    float diskon = 0.3;

    cout << "Total belanja\t: "; cin >> totalBelanja;

    if (totalBelanja > 50000) {
        belanjadiskon = totalBelanja * diskon;
    }

    cout << "Total diskon\t: " << belanjadiskon << endl;
    cout << "Bayar Total Belanja setelah diskon\t: " << (totalBelanja - belanjadiskon) << endl;
}

/// <summary>
/// program menjawab bilangan ganjil/genap
/// </summary>
void Kasus3() {

    int inputBilangan;

    cout << "input suatu bilangan: "; cin >> inputBilangan;

    if (inputBilangan % 2 == 0) {
        cout << "Bilangan " << inputBilangan << " merupakan bilangan genap" << endl;
    }
    else {
        cout << "Bilangan " << inputBilangan << " merupakan bilangan ganjil" << endl;
    }
}

/// <summary>
/// program menentukan apakah bilangan lebih besar dari 100 atau tidak
/// </summary>
void Kasus4() {
    int inputBil;

    cout << "input suatu bilangan: "; cin >> inputBil;

    if (inputBil > 100) {
        cout << "bilangan yang diinputkan lebih besar dari 100" << endl;
    }
    else {
        cout << "bilangan yang diinputkan lebih kecil atau sama dengan 100" << endl;
    }
}

/// <summary>
/// Menentukan bangun datar dari sisi yang diinputkan user apakah segitiga atau bukan
/// </summary>
void Kasus5() {
    int banyakSisi;

    cout << "banyak sisi: "; cin >> banyakSisi;

    if (banyakSisi == 3) {
        cout << "Segitiga";
    }
    else
    {
        cout << "Bukan segitiga" << endl;
    }
}

/// <summary>
/// Menentukan bangun datar dari sisi yang diinputkan user, apakah segitiga, segiempat, atau bukan
/// </summary>
void Kasus6() {
    int banyakSisi;

    cout << "banyak sisi: "; cin >> banyakSisi;

    if (banyakSisi == 3) {
        cout << "Segitiga" << endl;
    }
    else if (banyakSisi == 4) {
        cout << "Segiempat" << endl;
    }
    else {
        cout << "Bukan segitiga ataupun segiempat" << endl;
    }
}

/// <summary>
/// Menentukan bangun datar dari sisi yang diinput user, apakah segitiga, segiempat, segilima, atau bukan
/// </summary>
void Kasus7() {
    int banyakSisi;

    cout << "banyak sisi: "; cin >> banyakSisi;

    if (banyakSisi == 3) {
        cout << "Segitiga" << endl;
    }
    else if (banyakSisi == 4) {
        cout << "Segiempat" << endl;
    }
    else if (banyakSisi == 5) {
        cout << "Segilima" << endl;
    }
    else {
        cout << "Bukan segitiga, segiempat, ataupun segilima" << endl;
    }
}

/// <summary>
/// Permen dari 3 anak
/// </summary>
void Kasus8() {
    int banyakPermenAli;
    int banyakPermenSupri;
    int banyakPermenHadi;

    cout << "berapa banyak permen ali: "; cin >> banyakPermenAli;
    cout << "berapa banyak permen supri: "; cin >> banyakPermenSupri;
    cout << "berapa banyak permen hadi: "; cin >> banyakPermenHadi;

    if (banyakPermenAli + banyakPermenSupri > banyakPermenHadi) {
        cout << "Permen hadi sangat banyak" << endl;
    }
    else if (banyakPermenAli == banyakPermenSupri + banyakPermenHadi) {
        cout << "Banyak permen ali sama dengan banyak permen supri + hadi" << endl;
    }
}

int main()
{
    cout << "Its about conditional statement" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
