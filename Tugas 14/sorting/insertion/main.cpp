#include <iostream>
#include <chrono>

using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int len = 4;
    int arr[len] = {9, 5 , 1, 4};

    // Mengukur waktu eksekusi
    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();

    insertionSort(arr, len);

    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

    // Menghitung durasi waktu eksekusi dalam milidetik
    chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu eksekusi : " << duration.count() << " ms" << endl;

    cout << "Array yang diurutkan : ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Menghitung kompleksitas ruang
    int space = sizeof(arr) + sizeof(len);
    cout << "Kompleksitas ruang : " << space << " bytes" << endl;

    return 0;
}
