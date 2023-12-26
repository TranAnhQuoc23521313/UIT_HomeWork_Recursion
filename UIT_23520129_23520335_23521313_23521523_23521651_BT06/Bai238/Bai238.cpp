#include <iostream>
#include <cmath>
using namespace std;
int DemChuSo(int x)
{
    if (x == 0)
        return 1;

    int dem = 0;
    while (x != 0)
    {
        dem++;
        x /= 10;
    }
    return dem;
}
int DemChuSo(int a[][100], int m, int n)
{
    if (m == 0)
        return 0;

    int dem = DemChuSo(a, m - 1, n);

    for (int j = 0; j < n; j++)
        dem += DemChuSo(a[m - 1][j]);

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
    int dem = DemChuSo(matran, m, n);
    cout << "So luong chu so trong ma tran la: " << dem << endl;
    return 0;
}
