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

int TonTaiDuong(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			return 1;
	return TonTaiDuong(a, m - 1, n);
}

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << TonTaiDuong(a, m, n);
	return 0;
}