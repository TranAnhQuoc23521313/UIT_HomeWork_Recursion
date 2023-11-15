#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int&, float&);
long double Tinh(int, float);

int main()
{
    int n;
    float x;
    Nhap(n, x);

    cout << "S = " << fixed << setprecision(5) << Tinh(n, x);
    return 0;
}

void Nhap(int& n, float& x)
{
    cout << "Nhap N: ";
    cin >> n;
    cout << "Nhap X: ";
    cin >> x;
}

long double Tinh(int n, float x)
{
    if (n == 0)
        return x;
    if (n == 1)
        return x + x * x * x;
    return (1 + x * x) * Tinh(n - 1, x) - x * x * Tinh(n - 2, x);
}