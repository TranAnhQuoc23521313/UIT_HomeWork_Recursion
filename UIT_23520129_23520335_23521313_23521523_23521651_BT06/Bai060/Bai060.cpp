#include <iostream>

using namespace std;

void Nhap(int[], int&, int&);
int TimKiemNhiPhan(int[], int, int, int);

int main()
{
    int n, x;
    int b[1000];
    Nhap(b, n, x);

    int kq = TimKiemNhiPhan(b, x, 0, n - 1);
    if (kq != -1)
        cout << "Gia tri " << x << " o vi tri " << kq;
    else
        cout << "Khong tim thay !!!";
    return 0;
}

void Nhap(int a[], int& n, int& x)
{
    cout << "Nhap N: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
    cout << "Nhap X: ";
    cin >> x;
}

int TimKiemNhiPhan(int a[], int x, int left, int right)
{
    int mid = (left + right) / 2;
    if (left > right)
        return -1;
    if (a[mid] == x)
        return mid;
    else if (a[mid] < x)
        return TimKiemNhiPhan(a, x, mid + 1, right);
    else if (a[mid] > x)
        return TimKiemNhiPhan(a, x, left, mid - 1);
}