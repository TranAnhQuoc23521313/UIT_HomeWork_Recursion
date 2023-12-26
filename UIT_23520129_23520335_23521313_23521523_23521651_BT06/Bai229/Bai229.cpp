#include<iostream>
using namespace std;

void Nhap(int a[][100], int& m, int& n);
bool ktToanChan(int n);
int DemToanChan(int a[][100], int m, int n);

int main()
{
    int m, n;
    int a[100][100];

    Nhap(a, m, n);
    cout << "So luong so nguyen toan chu so chan la: " << DemToanChan(a, m, n);

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

bool ktToanChan(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        if (digit % 2 != 0)
            return false;
        n = n / 10;
    }
    return true;
}

int DemToanChan(int a[][100], int m, int n)
{
    if (m == 0)
        return 0;
    int dem = DemToanChan(a, m - 1, n);
    for (int j = 0; j < n; j++)
        if (ktToanChan(a[m - 1][j]))
            dem = dem + 1;
    return dem;
}
