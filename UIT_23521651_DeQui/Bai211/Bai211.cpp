#include<iostream>
#include<iomanip>
using namespace std;

float TongAm(float[][100], int, int);

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
	cout << "Tong cac so am la: " << TongAm(a, m, n);

	return 0;
}

float TongAm(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	float s = TongAm(a, m - 1, n);
	for (int j = 0; j < n; j++) if (a[m - 1][j] < 0)
		s = s + a[m - 1][j];
	return s;
}