#include <iostream>
using namespace std;

int Tambah(int a, int b)
{
    int Hasil = a + b;
    return Hasil;
}

int Kurang(int a, int b)
{
    int Hasil = a - b;
    return Hasil;
}

int HitungSum(int Arr[], int n)
{
    int Total = 0;
    for (int i = 1; i <= n; i++)
    {
        Total += Arr[i];
    }
    return Total;
}

float HitungAvg(int Arr[], int n)
{
    int Total = HitungSum(Arr, n);
    float Avg = (float)Total / n;
    return Avg;
}

int main()
{

    int a, b;
    cout << "Masukan bilangan pertama : ";
    cin >> a;
    cout << "Masukan bilangan kedua: ";
    cin >> b;

    int HasilTambah = Tambah(a, b);
    int HasilKurang = Kurang(a, b);

    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;
    int Arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Masukkan nilai array ke-" << i << ": ";
        cin >> Arr[i];
    }
    int Total = HitungSum(Arr, n);
    float Avg = HitungAvg(Arr, n);

    cout << "1. Hasil Penjumlahan: " << HasilTambah << endl;
    cout << "2. Hasil Pengurangan: " << HasilKurang << endl;
    cout << "3. Total Array: " << Total << endl;
    cout << "4. Rata-Rata Array: " << Avg << endl;

    return 0;
}
