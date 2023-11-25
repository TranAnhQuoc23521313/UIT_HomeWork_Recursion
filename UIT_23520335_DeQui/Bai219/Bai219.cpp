#include<iostream>
using namespace std;

void Nhap(int a[][100], int& m, int& n);
int TichCot(int a[][100], int m, int n, int c);

int main()
{
    int m, n, c;
    int a[100][100];

    Nhap(a, m, n);
    cout << "Nhap cot can tinh tich: ";
    cin >> c;
    cout << "Tich cac so chan tren cot " << c << " la: " << TichCot(a, m, n, c);

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

int TichCot(int a[][100], int m, int n, int c)
{
    if (m == 0)
        return 1;
    int T = TichCot(a, m - 1, n, c);
    if (a[m - 1][c] % 2 == 0)
        T = T * a[m - 1][c];
    return T;
}
