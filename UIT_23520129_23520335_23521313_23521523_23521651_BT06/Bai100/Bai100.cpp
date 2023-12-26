#include <iostream>

using namespace std;

void Nhap(int[], int&);
int DemNguyenTo(int[], int);
bool KtNguyenTo(int);

int main()
{
    int n;
    int b[1000];
    Nhap(b, n);
    cout << "Ket qua: " << DemNguyenTo(b, n);
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

bool KtNguyenTo(int x)
{
    int dem = 0;
    for (int i = 1; i <= x; i++)
        if (x % i == 0)
            dem++;
    return (dem == 2);
}

int DemNguyenTo(int a[], int n)
{
    if (n == 0)
        return 0;
    int dem = DemNguyenTo(a, n - 1);
    if (KtNguyenTo(a[n - 1]))
        dem = dem + 1;
    return dem;
}