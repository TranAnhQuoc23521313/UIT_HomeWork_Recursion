#include<iostream>
#include<cmath>
using namespace std;

void Nhap(int a[][100], int& m, int& n);
bool ktChinhPhuong(int n);
int ChinhPhuongLonNhat(int a[][100], int m, int n);

int main()
{
    int m, n;
    int a[100][100];

    Nhap(a, m, n);
    cout << "So chinh phuong lon nhat trong ma tran la: " << ChinhPhuongLonNhat(a, m, n);

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

int ChinhPhuongLonNhat(int a[][100], int m, int n)
{
    if (m == 0)
        return -1;
    int lc = ChinhPhuongLonNhat(a, m - 1, n);
    for (int j = 0; j < n; j++)
        if (ktChinhPhuong(a[m - 1][j]))
            if (lc == -1 || a[m - 1][j] > lc)
                lc = a[m - 1][j];
    return lc;
}
