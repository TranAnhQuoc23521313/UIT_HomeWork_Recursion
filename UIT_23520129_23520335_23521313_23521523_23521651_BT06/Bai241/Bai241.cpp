#include<iostream>
#include<iomanip>
using namespace std;

float DuongDau(float[][100], int, int);

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
	cout << "Gia tri duong dau tien trong ma tran la: " << DuongDau(a, m, n);

	return 0;
}

float DuongDau(float a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = DuongDau(a, m - 1, n);
	if (lc != -1)
		return lc;
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			return a[m - 1][j];
	return -1;
}