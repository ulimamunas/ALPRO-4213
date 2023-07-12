#include <iostream>
#include <chrono>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            // Swap
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    const int len = 4;
    int arr[len] = {9, 27 , 1, 4};

    // Mengukur waktu eksekusi
    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();

    selectionSort(arr, len);

    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

    // Menghitung durasi waktu eksekusi dalam milidetik
    chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu eksekusi : " << duration.count() << " ms" << endl;

    cout << "Array yang diurutkan : ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
