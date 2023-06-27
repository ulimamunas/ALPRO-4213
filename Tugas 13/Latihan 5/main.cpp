#include <iostream>

using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    Sepeda sepeda1;

    Sepeda* pointerSepeda = &sepeda1;

    pointerSepeda->merk = "Polygon";
    pointerSepeda->type = "Sepeda Gunung";
    pointerSepeda->tahun = 2013;
    pointerSepeda->harga = "2.000.000";

    cout << "Merk: " << pointerSepeda->merk << endl;
    cout << "Type: " << pointerSepeda->type << endl;
    cout << "Tahun: " << pointerSepeda->tahun << endl;
    cout << "Harga: " << pointerSepeda->harga << endl;

    return 0;
}
