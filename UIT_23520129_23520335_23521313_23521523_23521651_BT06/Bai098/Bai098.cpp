#include <iostream>
using namespace std;

void NhapMang(float a[], int n)
{
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
}

int TanSuat(float a[], int n, float x)
{
    if (n == 0)
        return 0;
    int dem = TanSuat(a, n - 1, x);
    if (a[n - 1] == x)
        dem++;
    return dem;
}

int main()
{
    const int MAX_SIZE = 100;
    float arr[MAX_SIZE];
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    NhapMang(arr, n);
    float x;
    cout << "Nhap gia tri can dem: ";
    cin >> x;
    int ketqua = TanSuat(arr, n, x);
    cout << "So lan xuat hien cua gia tri " << x << " trong mang la: " << ketqua << endl;
    return 0;
}
