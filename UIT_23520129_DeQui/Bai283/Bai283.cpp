#include <iostream>
#include <iomanip>
using namespace std;
float TongCot(float a[][100], int m, int n, int c)
{
    if (m == 0)
        return 0;
    return TongCot(a, m - 1, n, c) + a[m - 1][c];
}
void ThemDong(float a[][100], int& m, int n)
{
    if (n == 0)
    {
        m++;
        return;
    }
    ThemDong(a, m, n - 1);
    a[m - 1][n - 1] = TongCot(a, m - 1, n, n - 1);
}
void InMaTran(float a[][100], int m, int n)
{
    cout << "Ma tran:\n";
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << setw(8) << a[i][j];
        cout << endl;
    }
}
void NhapMaTran(float a[][100], int& m, int& n)
{
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    cout << "Nhap ma tran:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
        {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
}
int main()
{
    int m, n;
    float a[100][100];
    NhapMaTran(a, m, n);
    ThemDong(a, m, n);
    cout << "Ma tran sau khi them mot dong:\n";
    InMaTran(a, m, n + 1);
    return 0;
}
