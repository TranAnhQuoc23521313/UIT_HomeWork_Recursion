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
float NhoNhatDong(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return a[d][0];
	float lc = NhoNhatDong(a, m, n - 1, d);
	if (a[d][n - 1] > lc)
		lc = a[d][n - 1];
	return lc;
}

void ThemCot(float a[][100], int m, int& n)
{
	if (m == 0)
	{
		n++;
		return;
	}
	ThemCot(a, m - 1, n);
	a[m - 1][n - 1] = NhoNhatDong(a, m, n - 1, m - 1);
}


int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	ThemCot(a, m, n);
	return 0;
}