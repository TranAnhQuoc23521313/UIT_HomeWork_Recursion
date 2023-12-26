#include <iostream>

using namespace std;

int TinhAn(int);
int TinhBn(int);

int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a = TinhAn(n);
    int b = TinhBn(n);
    cout << "So hang A thu " << n << ": " << a << endl;
    cout << "So hang B thu " << n << ": " << b;
    return 0;
}

int TinhAn(int n)
{
    if (n == 1)
        return 1;
    int a = TinhAn(n - 1);
    int b = TinhBn(n - 1);
    return (3 * b + 2 * a);
}

int TinhBn(int n)
{
    if (n == 1)
        return 1;
    int a = TinhAn(n - 1);
    int b = TinhBn(n - 1);
    return (a + 3 * b);
}