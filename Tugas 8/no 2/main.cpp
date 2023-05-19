#include <iostream>

using namespace std;
void BubbleSort (int x[], int n);
void InsertionSort (int x[], int n);

int main()
{
    int n;

    cout << "Masukkan Panjang Array: ";
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cout << "Masukkan nilai array index ke-" << i << ": ";
        cin >> a[i];
    }
    cout << endl;

    int pilih=0;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Insertion Sort" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilih;
    if(pilih == 1){
        BubbleSort(a, n);
    } else if (pilih == 2){
        InsertionSort(a, n);
    } else {
        while(pilih != 1 && pilih != 2){
            cout << "Input Salah" << endl;
            cout << "1. Bubble Sort" << endl;
            cout << "2. Insertion Sort" << endl;
            cout << "Masukkan pilihan: ";
            cin >> pilih;
        }
    }
    return 0;
}

void BubbleSort (int x[], int n){
    for(int i = 0; i < n-i-1; i++){
        for (int j = 0;j < n-i-1; j++){
            if (x[j] < x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
                cout << "{";
                for (int i = 0; i < n; i++){
                    cout << x[i];
                    if (i < n-1){
                        cout << ",";
                    } else {
                        cout << "}" << endl;
                    }
                }
            }
        }
    }
}
void InsertionSort (int x[], int n){
    for (int i = 1;i < n; i++){
        int j = i;
        while(j > 0 && x[j] > x[j-1]){
            int temp = x[j];
            x[j] = x[j-1];
            x[j-1] = temp;
            j--;
            cout << "{";
            for(int i = 0; i < n; i++){
                cout << x[i];
                if (i < n-1){
                    cout << ",";
                } else {
                    cout << "}" << endl;
                }
            }
        }
    }
}
