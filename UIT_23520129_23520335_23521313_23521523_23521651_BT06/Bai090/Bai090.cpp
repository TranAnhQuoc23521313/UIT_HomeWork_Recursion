#include <iostream>

using namespace std;

void Nhap(int[], int&);
bool KtDoiXung(int);
int SoDaoNguoc(int);
int TongDoiXung(int[], int);

int main()
{
    int n;
    int a[1000];
    Nhap(a, n);
    cout << "Ket qua: " << TongDoiXung(a, n);
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

int SoDaoNguoc(int x, int sodaonguoc)
{
    if (x == 0)
        return sodaonguoc;
    sodaonguoc = sodaonguoc * 10 + x % 10;
    return SoDaoNguoc(x / 10, sodaonguoc);
}

bool KtDoiXung(int x)
{
    int temp = 0;
    if (SoDaoNguoc(x, temp) == x)
        return true;
    return false;
}

int TongDoiXung(int a[], int n)
{
    if (n == 0)
        return 0;
    if (KtDoiXung(a[n - 1]))
        return TongDoiXung(a, n - 1) + a[n - 1];
    return TongDoiXung(a, n - 1);
}