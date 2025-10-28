#include <iostream>
using namespace std;

int main() {
    int nilai[5];
    int i, max, min, jumlah = 0;
    float rata;

    cout << "Masukkan nilai 5 mahasiswa:\n";
    for(i = 0; i < 5; i++) {
        cout << "Nilai mahasiswa ke-" << i+1 << ": ";
        cin >> nilai[i];
        jumlah += nilai[i];
    }

    rata = jumlah / 5.0;

    max = nilai[0];
    min = nilai[0];
    for(i = 1; i < 5; i++) {
        if(nilai[i] > max)
            max = nilai[i];
        if(nilai[i] < min)
            min = nilai[i];
    }

    // Tampilkan hasil
    cout << "\n=== HASIL ===\n";
    cout << "Nilai rata-rata : " << rata << endl;
    cout << "Nilai tertinggi : " << max << endl;
    cout << "Nilai terendah  : " << min << endl;

    cout << "Kategori rata-rata : ";
    if(rata >= 80)
        cout << "Baik Sekali" << endl;
    else if(rata >= 70)
        cout << "Baik" << endl;
    else if(rata >= 60)
        cout << "Cukup" << endl;
    else
        cout << "Kurang" << endl;

    return 0;
}
