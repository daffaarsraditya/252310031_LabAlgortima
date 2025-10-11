#include <iostream>
using namespace std;

int main() 
{
    string nama;
    float nilaiI, nilaiII, nilaiIII, nilairata;
    int kategori;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;

    cout << "Nama Siswa: ";
    getline(cin, nama);

    cout << "Nilai Pertandingan I: ";
    cin >> nilaiI;
    cout << "Nilai Pertandingan II: ";
    cin >> nilaiII;
    cout << "Nilai Pertandingan III: ";
    cin >> nilaiIII;

    nilairata = (nilaiI + nilaiII + nilaiIII) / 3;
    
    if (nilairata >= 85) 
	{
        kategori = 1;
    } else if (nilairata >= 70) {
        kategori = 2;
    } else {
        kategori = 3;
    }

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << nilairata << " dari hasil perlombaan yang diikutinya." << endl;

    switch (kategori) 
	{
        case 1:
            cout << "Menerima hadiah Komputer dengan processor Intel Core i5." << endl;
            break;
        case 2:
            cout << "Menerima hadiah uang sebesar Rp. 2.500.000." << endl;
            break;
        case 3:
            cout << "Mendapatkan hadiah hiburan." << endl;
            break;
        default:
            cout << "Tidak ada kategori yang tertera." << endl;
            break;
    }

    getchar();
}

