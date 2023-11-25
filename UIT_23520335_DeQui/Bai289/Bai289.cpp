#include<iostream>
using namespace std;

void Nhap(float a[][100], int& m, int& n);
void DichTraiDong(float a[][100], int m, int n, int d);
void DichTrai(float a[][100], int m, int n);

int main()
{
    int m, n;
    float a[100][100];

    Nhap(a, m, n);
    DichTrai(a, m, n);

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

void DichTraiDong(float a[][100], int m, int n, int d)
{
    float temp = a[d][0];
    for (int j = 0; j <= n - 2; j++)
        a[d][j] = a[d][j + 1];
    a[d][n - 1] = temp;
}

void DichTrai(float a[][100], int m, int n)
{
    if (m == 0)
        return;
    DichTrai(a, m - 1, n);
    DichTraiDong(a, m, n, m - 1);
}
