#include <iostream>
#include <iomanip>
using namespace std;
void HoanVi(float& x, float& y)
{
    float temp = x;
    x = y;
    y = temp;
}
void SapCotGiam(float a[][100], int m, int n, int c)
{
    if (m == 1)
        return;
    for (int i = 0; i <= m - 2; i++)
        if (a[i][c] < a[m - 1][c])
            HoanVi(a[i][c], a[m - 1][c]);
    SapCotGiam(a, m - 1, n, c);
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
void NhapMaTran(float a[][100], int m, int n)
{
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
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    float a[100][100];
    NhapMaTran(a, m, n);
    int c;
    cout << "Nhap cot can sap xep giam: ";
    cin >> c;
    if (c >= 0 && c < n)
    {
        SapCotGiam(a, m, n, c);

        cout << "Ma tran sau khi sap xep cot " << c << " giam dan:\n";
        InMaTran(a, m, n);
    }
    else
    {
        cout << "Nhap sai vi tri cot. Vui long kiem tra lai.";
    }
    return 0;
}
