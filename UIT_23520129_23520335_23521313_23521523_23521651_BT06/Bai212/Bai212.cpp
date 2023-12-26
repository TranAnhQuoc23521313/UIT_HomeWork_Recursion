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

float Tong(float a[][100], int m, int n, float x, float y)
{
	if (m == 0)
		return 0;
	float s = Tong(a, m - 1, n, x, y);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > x && a[m - 1][j] < y)
			s = s + a[m - 1][j];
	return s;
}

int main()
{
	float a[100][100];
	int m, n,x,y;
	Nhap(a, m, n);
	cin >> x >> y;
	cout << Tong(a, m, n,x,y);
	return 0;
}