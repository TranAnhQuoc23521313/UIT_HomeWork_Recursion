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

void DichXuongCot(float a[][100],
	int m, int n, int c)
{
	float temp = a[m - 1][c]; for (int i = m - 1; i >= 1; i--) a[i][c] = a[i - 1][c];
	a[0][c] = temp;
}


void DichXuong(float a[][100], int m, int n)
{
	if (n == 0)
		return;
	DichXuong(a, m, n - 1); DichXuongCot(a, m, n, n - 1);
}

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	DichXuong(a, m, n);
	return 0;
}