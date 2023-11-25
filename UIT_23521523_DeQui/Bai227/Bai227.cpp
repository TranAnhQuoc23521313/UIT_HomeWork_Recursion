#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(int a[][100], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}

int DemChan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			dem = dem + 1;
	return dem;
}

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << DemChan(a, m, n);
	return 0;
}