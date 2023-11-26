#include <iostream>
#include <iomanip>
using namespace std;
void HoanVi(float& x, float& y)
{
    float temp = x;
    x = y;
    y = temp;
}
void HoanViDong(float a[][100], int m, int n, int d1, int d2)
{
    if (n == 0)
        return;
    HoanVi(a[d1][n - 1], a[d2][n - 1]);
    HoanViDong(a, m, n - 1, d1, d2);
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
    int d1, d2;
    cout << "Nhap hai dong can hoan vi: ";
    cin >> d1 >> d2;
    if (d1 >= 0 && d1 < m && d2 >= 0 && d2 < m)
    {
        HoanViDong(a, m, n, d1, d2);

        cout << "Ma tran sau khi hoan vi dong " << d1 << " va dong " << d2 << ":\n";
        InMaTran(a, m, n);
    }
    else
    {
        cout << "Nhap sai vi tri dong. Vui long kiem tra lai.";
    }
    return 0;
}
