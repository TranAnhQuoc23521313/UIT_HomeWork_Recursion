#include<iostream>
using namespace std;

void Nhap(int a[][100], int& m, int& n);
void ThemDong(int a[][100], int& m, int n, int d);

int main()
{
    int m, n, d;
    int a[100][100];

    Nhap(a, m, n);
    cout << "Nhap dong can them: ";
    cin >> d;
    ThemDong(a, m, n, d);

    return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
    cout << "Nhap so dong m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
}

void ThemDong(int a[][100], int& m, int n, int d)
{
    if (n == 0)
    {
        m++;
        return;
    }
    ThemDong(a, m, n - 1, d);
    for (int i = m; i > d; i--)
        a[i][n - 1] = a[i - 1][n - 1];
    a[d][n - 1] = 1;
}
