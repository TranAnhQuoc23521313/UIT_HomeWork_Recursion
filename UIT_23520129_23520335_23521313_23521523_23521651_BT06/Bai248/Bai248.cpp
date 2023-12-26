#include <iostream>
#include <cmath>
using namespace std;
bool ktNguyenTo(int x)
{
    if (x < 2)
        return false;

    for (int i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}
int NguyenToLonNhat(int a[][100], int m, int n)
{
    if (m == 0)
        return -1;

    int lc = NguyenToLonNhat(a, m - 1, n);

    for (int j = 0; j < n; j++)
    {
        if (ktNguyenTo(a[m - 1][j]))
        {
            if (lc == -1 || a[m - 1][j] > lc)
            {
                lc = a[m - 1][j];
            }
        }
    }

    return lc;
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
    int nguyentoLonNhat = NguyenToLonNhat(matran, m, n);
    if (nguyentoLonNhat != -1)
    {
        cout << "So nguyen to lon nhat trong ma tran la: " << nguyentoLonNhat << endl;
    }
    else
    {
        cout << "Khong co so nguyen to trong ma tran." << endl;
    }
    return 0;
}
