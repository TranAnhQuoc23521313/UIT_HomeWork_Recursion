#include <iostream>
#include <iomanip>
using namespace std;
float LonNhatDong(float a[][100], int m, int n, int d)
{
    if (n == 1)
        return a[d][0];

    float lc = LonNhatDong(a, m, n - 1, d);

    if (a[d][n - 1] > lc)
        lc = a[d][n - 1];

    return lc;
}
void NhapMaTran(float a[][100], int m, int n)
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
void XuatMaTran(float a[][100], int m, int n)
{
    cout << "Ma tran " << m << "x" << n << ":\n";
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << setw(8) << fixed << setprecision(2) << a[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    const int MAX_SIZE = 100;
    float matran[MAX_SIZE][MAX_SIZE];
    int m, n, dong;
    cout << "Nhap so hang cua ma tran: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran: ";
    cin >> n;
    NhapMaTran(matran, m, n);
    XuatMaTran(matran, m, n);
    cout << "Nhap so dong can tim gia tri lon nhat: ";
    cin >> dong;
    float lonnhat = LonNhatDong(matran, m, n, dong);
    cout << "Gia tri lon nhat tren dong " << dong << " la: " << lonnhat << endl;
    return 0;
}
