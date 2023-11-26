#include <iostream>
#include <iomanip>
using namespace std;
bool ktDong(int a[][100], int m, int n, int d)
{
    if (n == 0)
        return false;

    if (a[d][n - 1] % 2 == 0)
        return true;

    return ktDong(a, m, n - 1, d);
}
void LietKe(int a[][100], int m, int n)
{
    if (m == 0)
        return;

    LietKe(a, m - 1, n);

    if (ktDong(a, m, n, m - 1))
    {
        cout << "Dong " << (m - 1) << " co chua gia tri chan.\n";
    }
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
            cout << setw(4) << a[i][j] << "\t";
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
    LietKe(matran, m, n);
    return 0;
}
