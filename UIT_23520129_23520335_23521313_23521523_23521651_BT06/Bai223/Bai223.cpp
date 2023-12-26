#include <iostream>
using namespace std;
float TichCot(float a[][100], int m, int n, int c)
{
    if (m == 0)
        return 1;

    float tich = TichCot(a, m - 1, n, c);

    if (a[m - 1][c] > 0)
        tich *= a[m - 1][c];

    return tich;
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
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    const int MAX_SIZE = 100;
    float matran[MAX_SIZE][MAX_SIZE];
    int m, n, cot;
    cout << "Nhap so hang cua ma tran: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran: ";
    cin >> n;
    NhapMaTran(matran, m, n);
    XuatMaTran(matran, m, n);
    cout << "Nhap so cot can tinh tich gia tri duong: ";
    cin >> cot;
    float tich = TichCot(matran, m, n, cot);
    cout << "Tich cac gia tri duong tren cot " << cot << " la: " << tich << endl;
    return 0;
}
