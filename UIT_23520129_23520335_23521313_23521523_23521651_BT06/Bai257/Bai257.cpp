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

int ktCotGiam(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return 1;
	if (a[m - 2][c] >= a[m - 1][c] &&
		ktCotGiam(a, m - 1, n, c) == 1)
		return 1;
	return 0;
}

int main()
{
	float a[100][100];
	int m, n,c;
	Nhap(a, m, n);
	cin >> c;
	cout << ktCotGiam(a, m, n,c);
	return 0;
}