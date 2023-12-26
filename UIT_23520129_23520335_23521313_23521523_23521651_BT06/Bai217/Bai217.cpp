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

float TongDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	float s = TongDong(a, m, n - 1, d);
	if (a[d][n - 1] > 0)
		s = s + a[d][n - 1];
	return s;
}

int main()
{
	float a[100][100];
	int m, n, y;
	Nhap(a, m, n);
	cin >>  y;
	cout << TongDong(a, m, n, y);
	return 0;
}