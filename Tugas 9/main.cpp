#include <iostream>

using namespace std;

int tambah1 (int a, int b);
int tambah2 (int a, int b);
int tambah3 (int a, int b);
int kurang (int a, int b);
int kali (int a, int b);
int bagi (int a, int b);
int pangkat (int a, int b);

int main()
{
    cout << tambah1(27,6) << endl;
    cout << tambah2(27,6) << endl;
    cout << tambah3(27,6) << endl;
    cout << kurang(27,6) << endl;
    cout << kali(27,6) << endl;
    cout << bagi (12,4) << endl;
    cout << pangkat(27,6) << endl;
    return 0;
}

int tambah1 (int a, int b)
{
    if (b == 0)
        return a;
    else
        return 1 + tambah1(a, b-1);
}

int tambah2 (int a, int b)
{
    if (a == 0)
        return b;
    else
        return 1 + tambah2(a-1, b);
}

int tambah3 (int a, int b)
{
    if (a <= 0 && b <= 0)
        return 0;
    else if (a > 0)
        return 1 + tambah3(a-1, b);
    else if (b > 0)
        return 1 + tambah3(a, b-1);
}

int kurang (int a, int b)
{
    if (b == 0)
        return a;
    else
        return kurang(a-1, b-1);
}

int kali (int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    else
        return a + kali(a, b-1);
}

int bagi (int a, int b)
{
    if (a < b)
        return 0;
    else
        return 1 + bagi(a-b, b);
}

int pangkat (int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * pangkat(a, b-1);
}
