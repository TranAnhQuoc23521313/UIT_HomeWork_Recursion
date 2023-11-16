#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
float DuongDau(float a[], int n);

int main()
{
    int n;
    float b[1000];
    Nhap(b, n);

    cout << "Ket qua: " << DuongDau(b, n);
    return 0;
}

void Nhap(float a[], int& n)
{
    cout << "Nhap N: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap A[" << i << "]: ";
        cin >> a[i];
    }
}

float DuongDau(float a[], int n)
{
    if (n == 0)
        return 0;
    float lc = DuongDau(a, n - 1);
    if (lc != 0)
        return lc;
    if (a[n - 1] > 0)
        return a[n - 1];
    return 0;
}