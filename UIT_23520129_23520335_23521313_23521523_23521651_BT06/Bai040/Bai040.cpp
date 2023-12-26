#include <iostream>

using namespace std;

int UocLeLonNhat(int);

int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;

    cout << "Ket qua: " << UocLeLonNhat(n);
    return 0;
}

int UocLeLonNhat(int n)
{
    n = abs(n);
    if (n % 2 != 0)
        return n;
    return UocLeLonNhat(n / 2);
}