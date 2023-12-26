#include<iostream>
using namespace std;

void Nhap(int a[][100], int& m, int& n);
bool ktToanLe(int n);
int DemToanLe(int a[][100], int m, int n, int d);

int main()
{
    int m, n, d;
    int a[100][100];

    Nhap(a, m, n);
    cout << "Nhap dong can dem: ";
    cin >> d;
    cout << "So luong so nguyen toan chu so le tren dong " << d << " la: " << DemToanLe(a, m, n, d);

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

bool ktToanLe(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
            return false;
        n = n / 10;
    }
    return true;
}

int DemToanLe(int a[][100], int m, int n, int d)
{
    if (n == 0)
        return 0;
    int dem = DemToanLe(a, m, n - 1, d);
    if (ktToanLe(a[d][n - 1]))
        dem = dem + 1;
    return dem;
}
