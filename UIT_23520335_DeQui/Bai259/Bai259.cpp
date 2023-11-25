#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[][100], int& m, int& n);
int ktDong(float a[][100], int m, int n, int d);
void LietKe(float a[][100], int m, int n);

int main()
{
    int m, n;
    float a[100][100];

    Nhap(a, m, n);
    cout << "Cac dong co chua gia tri am la: ";
    LietKe(a, m, n);

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

int ktDong(float a[][100], int m, int n, int d)
{
    if (n == 0)
        return 0;
    if (a[d][n - 1] < 0)
        return 1;
    return ktDong(a, m, n - 1, d);
}

void LietKe(float a[][100], int m, int n)
{
    if (m == 0)
        return;
    LietKe(a, m - 1, n);
    if (ktDong(a, m, n, m - 1) == 1)
        cout << setw(4) << (m - 1);
}
