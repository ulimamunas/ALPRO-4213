#include <iostream>
using namespace std;

enum gear {N = 0, First = 1, Second = 2, Third = 3, Fourth = 4, Fifth = 5, R = 6};

int main(){
    int hari;
    cout << "Input (0-6): ";
    cin >> hari ;
    cout << "Gear: ";
    switch (hari) {
        case 0:
            cout << "Gear N";
            break;
        case 1:
            cout << "Gear First";
            break;
        case 2:
            cout << "Gear Second";
            break;
        case 3:
            cout << "Gear Third";
            break;
        case 4:
            cout << "Gear Fourth";
            break;
        case 5:
            cout << "Gear Fifth";
            break;
        case 6:
            cout << "Gear R";
            break;

    }
    cout << endl;
    return 0;
}
