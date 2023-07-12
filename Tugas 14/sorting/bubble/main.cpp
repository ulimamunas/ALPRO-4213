#include <iostream>
#include <chrono>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int len = 4;
    int arr[len] = {9, 5 , 3, 4};

    // Mengukur waktu eksekusi
    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();

    bubbleSort(arr, len);

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
