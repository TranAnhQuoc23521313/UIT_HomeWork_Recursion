#include <iostream>
#include <cmath>

using namespace std;

int Tong(int);

int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;

    cout << "Tong S = " << Tong(n);
    return 0;
}

int Tong(int n)
{
    if (n == 0)
        return 0;
    int S = Tong(n - 1);
    return (S + pow(n, 3));
}