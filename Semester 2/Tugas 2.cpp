#include <iostream>
using namespace std;

// Fungsi Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar elemen
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int data_nisn[] = {105, 102, 108, 101, 109, 104, 107};
    int n = sizeof(data_nisn) / sizeof(data_nisn[0]);

    cout << "Data NISN sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << data_nisn[i] << " ";
    }
    cout << endl;

    bubbleSort(data_nisn, n);

    cout << "Data NISN setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << data_nisn[i] << " ";
    }
    cout << endl;

    return 0;
}
