#include <iostream>
#include <iomanip>

using namespace std;

float Tong(int);

int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;

    cout << "S = " << fixed << setprecision(5) << Tong(n);
    return 0;
}

float Tong(int n)
{
    if (n == 0)
        return 0;
    float S = Tong(n - 1);
    return (S + (float)1 / (n * (n + 1)));
}