#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int a[][100], int& m, int& n);
bool ktChinhPhuong(int n);
int ktCot(int a[][100], int m, int n, int c);
void LietKe(int a[][100], int m, int n);

int main()
{
    int m, n;
    int a[100][100];

    Nhap(a, m, n);
    cout << "Cac cot co chua so chinh phuong la: ";
    LietKe(a, m, n);

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

bool ktChinhPhuong(int n)
{
    int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n;
}

int ktCot(int a[][100], int m, int n, int c)
{
    if (m == 0)
        return 0;
    if (ktChinhPhuong(a[m - 1][c]))
        return 1;
    return ktCot(a, m - 1, n, c);
}

void LietKe(int a[][100], int m, int n)
{
    if (n == 0)
        return;
    LietKe(a, m, n - 1);
    if (ktCot(a, m, n, n - 1) == 1)
        cout << setw(4) << (n - 1);
}
