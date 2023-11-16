#include <iostream>

using namespace std;

void Nhap(int[], int&);
int ChanCuoi(int[], int);

int main()
{
    int n;
    int b[1000];
    Nhap(b, n);
    cout << "Ket qua: " << ChanCuoi(b, n);
    return 0;
}

int ChanCuoi(int a[], int n)
{
    if (n == 0)
        return -1;
    if (a[n - 1] % 2 == 0)
        return a[n - 1];
    return ChanCuoi(a, n - 1);
}

void Nhap(int a[], int& n)
{
    cout << "Nhap N: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap A[" << i << "]: ";
        cin >> a[i];
    }
}