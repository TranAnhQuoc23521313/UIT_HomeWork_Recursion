#include<iostream>
using namespace std;

void Nhap(float a[][100], int& m, int& n);
void HoanVi(float& a, float& b);
void SapDongTang(float a[][100], int m, int n, int d);
void SapDongGiam(float a[][100], int m, int n, int d);
void SapXep(float a[][100], int m, int n);

int main()
{
    int m, n;
    float a[100][100];

    Nhap(a, m, n);
    SapXep(a, m, n);

    return 0;
}

void Nhap(float a[][100], int& m, int& n)
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

void HoanVi(float& a, float& b)
{
    float temp = a;
    a = b;
    b = temp;
}

void SapDongTang(float a[][100], int m, int n, int d)
{
    if (n == 1)
        return;
    for (int j = 0; j <= n - 2; j++)
        if (a[d][j] > a[d][n - 1])
            HoanVi(a[d][j], a[d][n - 1]);
    SapDongTang(a, m, n - 1, d);
}

void SapDongGiam(float a[][100], int m, int n, int d)
{
    if (n == 1)
        return;
    for (int j = 0; j <= n - 2; j++)
        if (a[d][j] < a[d][n - 1])
            HoanVi(a[d][j], a[d][n - 1]);
    SapDongGiam(a, m, n - 1, d);
}

void SapXep(float a[][100], int m, int n)
{
    if (m == 1)
        return;
    SapXep(a, m - 1, n);
    if ((m - 1) % 2 == 0)
        SapDongTang(a, m, n, m - 1);
    else
        SapDongGiam(a, m, n, m - 1);
}
