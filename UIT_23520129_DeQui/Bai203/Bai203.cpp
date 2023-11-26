#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool ktDang5m(int x)
{
    while (x > 1)
    {
        if (x % 5 != 0)
            return false;
        x /= 5;
    }
    return (x == 1);
}
void LietKe(int a[][100], int m, int n, int c)
{
    if (m == 0)
        return;

    LietKe(a, m - 1, n, c);

    if (ktDang5m(a[m - 1][c]))
        cout << setw(4) << a[m - 1][c];
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
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}
int main()
{
    const int MAX_SIZE = 100;
    int matran[MAX_SIZE][MAX_SIZE];
    int m, n, cot;
    cout << "Nhap so hang cua ma tran: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran: ";
    cin >> n;
    NhapMaTran(matran, m, n);
    XuatMaTran(matran, m, n);
    cout << "Nhap so cot can liet ke so nguyen co dang 5^m: ";
    cin >> cot;
    cout << "Cac so nguyen co dang 5^m tren cot " << cot << " la: ";
    LietKe(matran, m, n, cot);
    cout << endl;
    return 0;
}
