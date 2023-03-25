#include <iostream>
using namespace std;

bool isEven (int x){
    if (x % 2 == 0){
        return true;
    } else {
        return false;
    }
}

bool isOdd (int x){
    if (x % 2 != 0){
        return true;
    } else {
        return false;
    }
}

bool isFactor (int a, int b){
    return  a % b == 0;
}

int MaxArray (int A[], int n){
    int Hasil;
    for (int i = 0; i < n; i++){
        if (Hasil < A[i]){
            Hasil = A[i];
        }
    }
    return Hasil;
}

int MinArray (int A[], int n){
    int Hasil = A[0];
    for (int i = 0; i < n; i++){
        if (Hasil > A[i]){
            Hasil = A[i];
        }
    }
    return Hasil;
}

int Max (int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}

int Min (int a, int b){
    if (a < b){
        return a;
    } else {
        return b;
    }
}

int SumEven (int A[], int n){
    int Sum = 0;
    for (int i = 0; i < n; i++){
        if (A[i] % 2 == 0){
            Sum += A[i];
        }
    }
    return Sum;
}

int SumOdd (int A[], int n){
    int Sum = 0;
    for (int i = 0; i < n; i++){
        if (A[i] % 2 != 0){
            Sum += A[i];
        }
    }
    return Sum;
}

void Swap (int a, int b){
    int Temp;
    Temp = b;
    b = a;
    a = Temp;
    cout << "Nilai a: " << a << " dan " << "Nilai b: " << b;
}

bool isFound (int A[], int x, int n){
    for (int i = 0; i < n; i++){
        if (A[i] == x){
            return true;
        }
    }
    return false;
}

int main(){

    int n;
    //isEven
    cout << "1. isEven\n" "Masukkan angka: ";
    cin >> n;
    string Even = (isEven(n) == 1) ? " Termasuk bilangan genap" : " Tidak termasuk bilangan genap (ganjil)";
    cout << n << Even << endl;

    cout << "==============================" << endl;

    //isOdd
    cout << "2. isOdd\n" "Masukkan angka: ";
    cin >> n;
    string Odd = (isOdd(n) == 1) ? " Termasuk bilangan ganjil" : " Tidak termasuk bilangan ganjil (genap)";
    cout << n << Odd << endl;

    cout << "=======================================================" << endl;

    int a, b;
    //Input Bilangan
    cout << "Masukkan bilangan pertama (a): ";
    cin >> a;
    cout << "Masukkan bilangan kedua (b): ";
    cin >> b;

    cout << "==============================" << endl;

    //isFactor
    cout << "3. isFactor\n";
    string Factor = (isFactor(a, b) == 1) ? " Merupakan faktornya " : " Bukan faktornya ";
    cout<< b << Factor << a << endl;

    cout << "==============================" << endl;

    //Max
    cout << "4. Max\n" "Yang lebih besar adalah " << Max(a, b) << endl;

    cout << "==============================" << endl;

    //Min
    cout << "5. Min\n" "Yang lebih kecil adalah " << Min(a, b) << endl;

    cout << "==============================" << endl;

    //Swap
    cout << "6. Swap" << endl;
    Swap(a, b);
    cout << "\n";

    cout << "=======================================================" << endl;

    //Input Array
    cout << "Masukkan panjang array: ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai array ke-" << i << ": ";
        cin >> A[i];
    }

    cout << "==============================" << endl;

    //MaxArray
    int MaxArr = MaxArray(A, n);
    cout << "7. MaxArray\n" "Nilai terbesar dari array tersebut adalah: " << MaxArr << endl;

    cout << "==============================" << endl;

    //MinArray
    int MinArr = MinArray(A, n);
    cout << "8. MinArray\n" "Nilai terkecil dari array tersebut adalah: " << MinArr << endl;

    cout << "==============================" << endl;

    //SumEven
    int SumGenap = SumEven(A, n);
    cout << "9. SumEven\n" "Jumlah nilai genap: " << SumGenap << endl;

    cout << "==============================" << endl;

    //SumOdd
    int SumGanjil = SumOdd(A, n);
    cout << "10. SumOdd\n" "Jumlah nilai ganjil: " << SumGanjil << endl;

    cout << "==============================" << endl;

    int x;
    //isFound
    cout << "11. isFound\n" "Masukkan angka yang ingin dicari: ";
    cin >> x;
    string Cari = (isFound(A, x, n) == 1) ? "Angka ditemukan" : "Angka tidak ditemukan";
    cout << Cari << endl;

    return 0;
}
