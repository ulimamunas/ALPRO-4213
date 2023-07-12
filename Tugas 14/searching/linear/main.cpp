#include <iostream>
#include <chrono>

using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Jika key tidak ditemukan
}

int main() {
    const int len = 7;
    int arr[len] = {5, 8, 4, 7, 2, 9, 3};
    int key = 5;

    // Mengukur waktu eksekusi
    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();

    int index = linearSearch(arr, len, key);

    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

    // Menghitung durasi waktu eksekusi dalam milidetik
    chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu eksekusi : " << duration.count() << " ms" << endl;

    if (index != -1) {
        cout << "Key ditemukan di indeks : " << index << endl;
    }
    else {
        cout << "Key tidak ditemukan" << endl;
    }
    // Menghitung kompleksitas ruang
    int space = sizeof(arr) + sizeof(len);
    cout << "Kompleksitas ruang : " << space << " bytes" << endl;

    return 0;
}
