#include<iostream>
using namespace std;

void Nhap(int a[][100], int& m, int& n);
bool ktNguyenTo(int n);
int TongDong(int a[][100], int m, int n, int d);

int main()
{
    int m, n;
    int a[100][100];

    Nhap(a, m, n);

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

bool ktNguyenTo(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int TongDong(int a[][100], int m, int n, int d)
{
    if (n == 0)
        return 0;
    int s = TongDong(a, m, n - 1, d);
    if (ktNguyenTo(a[d][n - 1]))
        s = s + a[d][n - 1];
    return s;
}
