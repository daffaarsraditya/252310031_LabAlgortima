#include <iostream>
using namespace std;

int main() {
    int matriks[3][3];

    cout << "Masukkan elemen matriks 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukan nilai  matriks [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }


    cout << "\nMatriks: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
