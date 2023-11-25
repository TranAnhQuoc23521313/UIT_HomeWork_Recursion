#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float a[][100], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}

void XoaDong(float a[][100], int& m, int n, int d)
{
	if (n == 0)
	{
		m--;
		return;
	}
	XoaDong(a, m, n - 1, d);
	for (int i = d; i <= m - 2; i++)
		a[i][n - 1] = a[i + 1][n - 1];
}

int main()
{
	float a[100][100];
	int m, n, k;
	Nhap(a, m, n);
	cin >> k;
	XoaDong(a, m, n, k);
	return 0;
}