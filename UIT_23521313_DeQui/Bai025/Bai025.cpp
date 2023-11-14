#include <iostream>
#include <cmath>

using namespace std;

int TichSoLe(int);

int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;

    cout << "Tich cac chu so le cua N: " << TichSoLe(n);
    return 0;
}

int TichSoLe(int n)
{
    n = abs(n);
    if (n <= 9)
    {
        if (n % 2 == 0)
            return 1;
        return n;
    }
    int T = TichSoLe(n / 10);
    int dv = n % 10;
    if (dv % 2 != 0)
        return T * dv;
    return T;
}