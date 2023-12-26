#include<iostream>
using namespace std;

void Nhap(float a[][100], int& m, int& n);
void HoanVi(float& a, float& b);
void HoanViCot(float a[][100], int m, int n, int c1, int c2);

int main()
{
    int m, n, c1, c2;
    float a[100][100];

    Nhap(a, m, n);
    cout << "Nhap cot thu nhat can hoan vi: ";
    cin >> c1;
    cout << "Nhap cot thu hai can hoan vi: ";
    cin >> c2;
    HoanViCot(a, m, n, c1, c2);

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

void HoanViCot(float a[][100], int m, int n, int c1, int c2)
{
    if (m == 0)
        return;
    HoanViCot(a, m - 1, n, c1, c2);
    HoanVi(a[m - 1][c1], a[m - 1][c2]);
}
