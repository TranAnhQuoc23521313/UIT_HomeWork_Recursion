#include <iostream>
using namespace std;
int TanSuat(int a[], int n, int x)
{
    if (n == 0)
        return 0;

    int dem = TanSuat(a + 1, n - 1, x);
    if (a[0] == x)
        dem++;

    return dem;
}
int ktThuoc(int a[], int n, int b[], int k)
{
    if (n == 0)
        return 1;

    if (TanSuat(b, k, a[0]) > 0 && ktThuoc(a + 1, n - 1, b, k) == 1)
        return 1;

    return 0;
}
void NhapMang(int arr[], int& n)
{
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
}

int main()
{
    const int MAX_SIZE_A = 100;
    const int MAX_SIZE_B = 100;
    int arrA[MAX_SIZE_A];
    int arrB[MAX_SIZE_B];
    int nA, nB;
    NhapMang(arrA, nA);
    NhapMang(arrB, nB);
    if (ktThuoc(arrA, nA, arrB, nB) == 1)
        cout << "Tat ca cac phan tu trong mang a deu nam trong mang b.\n";
    else
        cout << "Khong phai tat ca cac phan tu trong mang a deu nam trong mang b.\n";
    return 0;
}
