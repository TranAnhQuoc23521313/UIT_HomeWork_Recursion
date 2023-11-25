#include<iostream>
using namespace std;

void Nhap(float a[][100], int& m, int& n);
float TichDong(float a[][100], int m, int n, int d);
void ThemCot(float a[][100], int m, int& n);

int main()
{
    int m, n;
    float a[100][100];

    Nhap(a, m, n);
    ThemCot(a, m, n);

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

float TichDong(float a[][100], int m, int n, int d)
{
    if (n == 1)
        return a[d][0];
    return TichDong(a, m, n - 1, d) * a[d][n - 1];
}

void ThemCot(float a[][100], int m, int& n)
{
    if (m == 0)
    {
        n++;
        return;
    }
    ThemCot(a, m - 1, n);
    a[m - 1][n] = TichDong(a, m, n, m - 1);
}
