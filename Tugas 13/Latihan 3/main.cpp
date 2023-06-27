#include <iostream>
using namespace std;

typedef struct luaspp {
    int p, l;
    int Luas() {
        return p * l;
    }
} lpp;

typedef struct luasling {
    int r;
    float phi = 3.14;
    float Luas() {
        return phi * r * r;
    }
} ll;

typedef struct vkerucut {
    int r, t;
    float phi = 3.14;
    float Volume() {
        return 0.3 * phi * r * r * t;
    }
} vk;

typedef struct vbola{
    int r;
    float phi = 3.14;
    float Volume() {
        return 1.3 * phi * r * r * r;
    }
} vb;

int main() {
    lpp myPersegi;
    myPersegi.p = 2;
    myPersegi.l = 7;
    cout << "Luas Persegi Panjang: " << myPersegi.Luas() << endl;

    ll myLingkaran;
    myLingkaran.r = 7;
    myLingkaran.phi = 3.14;
    cout << "Luas Lingkaran: " << myLingkaran.Luas() << endl;

    vk myKerucut;
    myKerucut.r = 7;
    myKerucut.t = 2;
    myKerucut.phi = 3.14;
    cout << "Volume Kerucut: " << myKerucut.Volume() << endl;

    vb myBola;
    myBola.r = 7;
    myBola.phi = 3.14;
    cout << "Volume Bola: " << myBola.Volume() << endl;

    return 0;
}
