#include <iostream>
#include <chrono>

using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; // Jika key tidak ditemukan
}

int main() {
    const int len = 8;
    int arr[len] = {10, 8, 5, 2, 7, 9, 3, 4};
    int key = 2;

    // Mengukur waktu eksekusi
    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();

    int index = binarySearch(arr, 0, len - 1, key);

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

    return 0;
}
