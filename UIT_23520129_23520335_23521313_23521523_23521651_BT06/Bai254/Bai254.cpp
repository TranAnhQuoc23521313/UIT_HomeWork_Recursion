#include<iostream>
using namespace std;

void Nhap(int a[][100], int& m, int& n);
bool ktHoanThien(int n);
int TonTaiHoanThien(int a[][100], int m, int n);

int main()
{
    int m, n;
    int a[100][100];

    Nhap(a, m, n);
    if (TonTaiHoanThien(a, m, n))
        cout << "Ma tran co ton tai so hoan thien.";
    else
        cout << "Ma tran khong ton tai so hoan thien.";

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

bool ktHoanThien(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    return sum == n;
}

int TonTaiHoanThien(int a[][100], int m, int n)
{
    if (m == 0)
        return 0;
    for (int j = 0; j < n; j++)
        if (ktHoanThien(a[m - 1][j]))
            return 1;
    return TonTaiHoanThien(a, m - 1, n);
}
