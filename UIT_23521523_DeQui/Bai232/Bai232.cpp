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

int DemDuongDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int dem = DemDuongDong(a, m, n - 1, d);
	if (a[d][n - 1] > 0)
		dem = dem + 1;
	return dem;
}

int main()
{
	float a[100][100];
	int m, n,x;
	Nhap(a, m, n);
	cin >> x;
	cout << DemDuongDong(a, m, n,x);
	return 0;
}