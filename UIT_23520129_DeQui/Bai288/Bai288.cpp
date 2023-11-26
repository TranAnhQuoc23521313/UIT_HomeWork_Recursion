#include <iostream>
#include <iomanip>
using namespace std;
void DichLenCot(float a[][100], int m, int n, int c)
{
    float temp = a[0][c];
    for (int i = 0; i <= m - 2; i++)
        a[i][c] = a[i + 1][c];
    a[m - 1][c] = temp;
}
void DichLen(float a[][100], int m, int n)
{
    if (n == 0)
        return;
    DichLen(a, m, n - 1);
    DichLenCot(a, m, n, n - 1);
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
    DichLen(a, m, n);
    cout << "Ma tran sau khi dich len xoay vong cac hang:\n";
    InMaTran(a, m, n);
    return 0;
}
