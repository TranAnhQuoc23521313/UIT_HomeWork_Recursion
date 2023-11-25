#include<iostream>
#include<iomanip>
using namespace std;

int DemDuong(float[][100], int, int);

int main()
{
	int m, n;
	float a[100][100];
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	cout << "So luong so duong trong ma tran la: " << DemDuong(a, m, n);

	return 0;
}

int DemDuong(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemDuong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			dem = dem + 1;
	return dem;
}