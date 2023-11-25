#include<iostream>
using namespace std;

void Nhap(float a[][100], int& m, int& n);
float NhoNhatCot(float a[][100], int m, int n, int c);

int main()
{
    int m, n, c;
    float a[100][100];

    Nhap(a, m, n);
    cout << "Nhap cot can tim gia tri nho nhat: ";
    cin >> c;
    cout << "Gia tri nho nhat tren cot " << c << " la: " << NhoNhatCot(a, m, n, c);

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

float NhoNhatCot(float a[][100], int m, int n, int c)
{
    if (m == 1)
        return a[0][c];
    float lc = NhoNhatCot(a, m - 1, n, c);
    if (a[m - 1][c] < lc)
        lc = a[m - 1][c];
    return lc;
}
#include<iostream>
using namespace std;

void Nhap(float a[][100], int& m, int& n);
float NhoNhatCot(float a[][100], int m, int n, int c);

int main()
{
    int m, n, c;
    float a[100][100];

    Nhap(a, m, n);
    cout << "Nhap cot can tim gia tri nho nhat: ";
    cin >> c;
    cout << "Gia tri nho nhat tren cot " << c << " la: " << NhoNhatCot(a, m, n, c);

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

float NhoNhatCot(float a[][100], int m, int n, int c)
{
    if (m == 1)
        return a[0][c];
    float lc = NhoNhatCot(a, m - 1, n, c);
    if (a[m - 1][c] < lc)
        lc = a[m - 1][c];
    return lc;
}
