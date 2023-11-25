#include<iostream>
using namespace std;

void Nhap(float a[][100], int& m, int& n);
float LonNhat(float a[][100], int m, int n);

int main()
{
    int m, n;
    float a[100][100];

    Nhap(a, m, n);
    cout << "Gia tri lon nhat trong ma tran la: " << LonNhat(a, m, n);

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

float LonNhat(float a[][100], int m, int n)
{
    if (m == 1)
    {
        float lc = a[0][0];
        for (int j = 0; j < n; j++)
            if (a[0][j] > lc)
                lc = a[0][j];
        return lc;
    }
    float lc = LonNhat(a, m - 1, n);
    for (int j = 0; j < n; j++)
        if (a[m - 1][j] > lc)
            lc = a[m - 1][j];
    return lc;
}
