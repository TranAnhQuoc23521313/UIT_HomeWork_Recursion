#include <iostream>

using namespace std;

int Tinh(int);

int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;

    cout << "So hang A thu " << n << ": " << Tinh(n);
    return 0;
}

int Tinh(int n)
{
    if (n == 0)
        return -1;
    if (n == 1)
        return 3;
    return 5 * Tinh(n - 1) - Tinh(n - 2);
}