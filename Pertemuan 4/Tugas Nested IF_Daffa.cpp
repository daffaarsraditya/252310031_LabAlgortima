#include <iostream>
using namespace std;

int main()
{
    string nama;
    float nilai1, nilai2, nilai3, rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA\n";
    cout << "Nama Siswa: ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I: ";
    cin >> nilai1;
    cout << "Nilai Pertandingan II: ";
    cin >> nilai2;
    cout << "Nilai Pertandingan III: ";
    cin >> nilai3;

    rata = (nilai1 + nilai2 + nilai3) / 3;

    cout << "Atas Nama Siswa  " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil pertandingan yang diikutsertakan " << endl;

    if (rata >= 70) 
	{
        if (rata >= 85) {
            cout << "Mendapatkan hadiah Komputer dengan processor Intel Core i5." << endl;
        }
		 else {
            cout << "Mendapatkan hadiah Uang sebesar Rp. 2.500.000." << endl;
        }
    } 
	else {
        cout << "Mendapatkan hadiah yang didapat adalah Hiburan." << endl;
    }

    getchar();
}
