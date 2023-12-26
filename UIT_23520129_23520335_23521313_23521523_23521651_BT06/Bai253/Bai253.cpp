#include <iostream>
using namespace std;
bool TonTaiLe(int a[][100], int m, int n)
{
    if (m == 0)
        return false;

    for (int j = 0; j < n; j++)
    {
        if (a[m - 1][j] % 2 != 0)
        {
            return true; 
        }
    }
    return TonTaiLe(a, m - 1, n); 
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
    if (TonTaiLe(matran, m, n))
    {
        cout << "Ma tran co ton tai so le." << endl;
    }
    else
    {
        cout << "Ma tran khong ton tai so le." << endl;
    }
    return 0;
}
