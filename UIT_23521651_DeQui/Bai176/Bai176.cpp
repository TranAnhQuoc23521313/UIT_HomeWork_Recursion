#include<iostream>
#include<iomanip>
using namespace std;

void DuaVeDau(int[], int);
void HoanVi(int&, int&);

int main()
{
    int a[100], n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
    DuaVeDau(a, n);
    cout << "Mang sau khi dua so chia het cho 3 ve dau: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

void DuaVeDau(int a[], int n)
{
    if (n == 0)
        return;
    if (a[n - 1] % 3 != 0)
    {
        DuaVeDau(a, n - 1);
        return;
    }
    for (int i = 0; i <= n - 2; i++)
        if (a[i] % 3 != 0)
        {
            HoanVi(a[n - 1], a[i]);
            break;
        }
    DuaVeDau(a, n - 1);
}

void HoanVi(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}