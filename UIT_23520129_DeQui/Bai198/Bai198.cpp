#include <iostream>
#include <iomanip>
using namespace std;

void LietKe(int a[][100], int m, int n, int d)
{
    if (n == 0)
        return;
    LietKe(a, m, n - 1, d);
    if (a[d][n - 1] % 2 == 0)
        cout << setw(4) << a[d][n - 1];
}

void LietKeGiaTriChan(int a[][100], int m, int n, int hang)
{
    if (hang >= 0 && hang < m)
    {
        cout << "Cac gia tri chan tren dong " << hang << " la: ";
        LietKe(a, m, n, hang);
        cout << endl;
    }
    else
    {
        cout << "Hang khong hop le!" << endl;
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
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}
int main()
{
    const int MAX_SIZE = 100;
    int matran[MAX_SIZE][MAX_SIZE];
    int m, n, hang;
    cout << "Nhap so hang cua ma tran: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran: ";
    cin >> n;
    NhapMaTran(matran, m, n);
    XuatMaTran(matran, m, n);
    cout << "Nhap so hang can liet ke gia tri chan: ";
    cin >> hang;
    LietKeGiaTriChan(matran, m, n, hang);
    return 0;
}
