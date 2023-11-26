#include <iostream>
#include <iomanip>
using namespace std;
void XoaCot(float a[][100], int m, int& n, int c)
{
    if (m == 0)
    {
        n--;
        return;
    }

    XoaCot(a, m - 1, n, c);

    for (int j = c; j <= n - 2; j++)
        a[m - 1][j] = a[m - 1][j + 1];
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
    int c;
    cout << "Nhap cot can xoa: ";
    cin >> c;
    if (c >= 0 && c < n)
    {
        XoaCot(a, m, n, c);
        cout << "Ma tran sau khi xoa cot " << c << ":\n";
        InMaTran(a, m, n);
    }
    else
    {
        cout << "Nhap sai vi tri cot. Vui long kiem tra lai.";
    }
    return 0;
}
