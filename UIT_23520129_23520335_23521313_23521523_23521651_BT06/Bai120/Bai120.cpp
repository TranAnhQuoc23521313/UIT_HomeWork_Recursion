#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
bool KtHoanThien(int);
int HoanThienDau(int[], int);
int main()
{
    int n;
    int a[1000];
    Nhap(a, n);

    cout << "Ket qua: " << HoanThienDau(a, n);
    return 0;
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

bool KtHoanThien(int x)
{
    int s = 0;
    for (int i = 1; i < x; i++)
        if (x % i == 0)
            s += i;
    return (s == x);
}

int HoanThienDau(int a[], int n)
{
    if (n == 0)
        return -1;
    int lc = HoanThienDau(a, n - 1);
    if (lc != -1)
        return lc;
    if (KtHoanThien(a[n - 1]))
        return a[n - 1];
    return -1;
}