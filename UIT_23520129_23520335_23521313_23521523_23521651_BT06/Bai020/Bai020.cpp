#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float Tong(int);

int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;

    cout << "S = " << Tong(n);
    return 0;
}

float Tong(int n)
{
    if (n == 0)
        return 0;
    float S = Tong(n - 1);
    return (S + sqrt(1 + (float)1 / pow(n, 2) + (float)1 / pow(n + 1, 2)));
}