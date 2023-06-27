#include <iostream>

using namespace std;

struct luaspp
{
    int p, l;
    int Luas(){
        return p * l;
    }
};
struct luasling
{
    int r;
    float phi = 3.14;
    float Luas(){
        return phi * r * r;
    }
};
struct vkerucut
{
    int r, t;
    float phi = 3.14;
    float Volume(){
        return 0.3 * phi * r * r * t;
    }
};
struct vbola
{
    int r;
    float phi = 3.14;
    float Volume(){
        return 1.3 * phi * r * r;
    }
};

struct luaspp lpp;
struct luasling ll;
struct vkerucut vk;
struct vbola vb;
int main()
{
    lpp.p = 2;
    lpp.l = 7;
    cout << "Luas Persegi Panjang: " << lpp.Luas() << endl;

    ll.r = 7;
    cout << "Luas Lingkaran: " << ll.Luas() << endl;

    vk.r = 7;
    vk.t = 2;
    cout << "Volume Kerucut: " << vk.Volume() << endl;

    vb.r = 7;
    cout << "Volume Bola: " << vb.Volume() << endl;
    return 0;
}
