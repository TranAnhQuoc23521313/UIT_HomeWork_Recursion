#include <iostream>
using namespace std;
bool ktHoanThien(int x)
{
    if (x <= 1)
        return false;
    int tong = 1; 
    for (int i = 2; i <= x / 2; ++i)
    {
        if (x % i == 0)
            tong += i;
    }

    return (tong == x);
}
int DemHoanThien(int a[][100], int m, int n)
{
    if (m == 0)
        return 0;

    int dem = DemHoanThien(a, m - 1, n);

    for (int j = 0; j < n; j++)
        if (ktHoanThien(a[m - 1][j]))
            dem++;

    return dem;
}
void NhapMaTran(int a[][100], int m, int n)
{
    cout << "Nhap ma tran " << m << "x" << n << ":\n";
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}
void XuatMaTran(int a[][100], int m, int n)
{
    cout << "Ma tran " << m << "x" << n << ":\n";
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    const int MAX_SIZE = 100;
    int matran[MAX_SIZE][MAX_SIZE];
    int m, n;
    cout << "Nhap so hang cua ma tran: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran: ";
    cin >> n;
    NhapMaTran(matran, m, n);
    XuatMaTran(matran, m, n);
    int dem = DemHoanThien(matran, m, n);
    cout << "So luong so hoan thien trong ma tran la: " << dem << endl;
    return 0;
}
