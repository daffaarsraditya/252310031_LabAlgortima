#include <iostream>
using namespace std;

int main()
{
	string nama;
	float nilai1, nilai2, nilai3, rata;
	
	cout << "PROGRAM PENGHITUNG NILAI RATA RATA ";
	cout << "Nama Siswa: ";
	getline(cin, nama);
	cout << "Nilai Perhitungan 1: ";
	cin >> nilai1;
	cout << "Nilai Perhitungan 2: ";
	cin >> nilai2;
	cout << "Nilai Perhitungan 3: ";
	cin >> nilai3;
	
	rata = (nilai1 + nilai2 + nilai3) / 3;
	
	cout << "Atas Nama Siswa " << nama << endl;
	cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya." << endl;
	
	 if (rata >= 85) {
        cout << "Hadiah yang didapat adalah Komputer Core i5." << endl;
    } else if (rata >= 70) {
        cout << "Hadiah yang didapat adalah Uang sebesar Rp. 2.500.000." << endl;
    } else {
        cout << "Hadiah yang didapat adalah Hiburan." << endl;
    }

    getchar();
		
}
