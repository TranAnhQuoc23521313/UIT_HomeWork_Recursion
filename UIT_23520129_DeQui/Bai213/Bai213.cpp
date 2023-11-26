#include <iostream>
using namespace std;
int TongChanDong(int a[][100], int m, int n, int d)
{
    if (n == 0)
        return 0;

    int tong = TongChanDong(a, m, n - 1, d);

    if (a[d][n - 1] % 2 == 0)
        tong += a[d][n - 1];

    return tong;
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
    int m, n, dong;
    cout << "Nhap so hang cua ma tran: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran: ";
    cin >> n;
    NhapMaTran(matran, m, n);
    XuatMaTran(matran, m, n);
    cout << "Nhap so dong can tinh tong chan: ";
    cin >> dong;
    int tong = TongChanDong(matran, m, n, dong);
    cout << "Tong so chan tren dong " << dong << " la: " << tong << endl;
    return 0;
}
