#include<iostream>
#include<iomanip>
using namespace std;

int TanSuat(float[][100], int, int, float);

int main()
{
	int m, n;
	float a[100][100], x;
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
	cout << "Nhap gia tri x: ";
	cin >> x;
	cout << "Tan so xuat hien cua gia tri x la: " << TanSuat(a, m, n, x);

	return 0;
}

int TanSuat(float a[][100], int m, int n, float x)
{
	if (m == 0)
		return 0;
	int dem = TanSuat(a, m - 1, n, x);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] == x)
			dem = dem + 1;
	return dem;
}