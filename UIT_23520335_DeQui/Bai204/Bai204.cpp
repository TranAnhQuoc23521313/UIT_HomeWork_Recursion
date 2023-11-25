#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int a[][500], int& m, int& n);
int TongChan(int a[][500], int m, int n);

int main()
{
	int m, n;
	int a[500][500];

	Nhap(a, m, n);
	cout << TongChan(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap M: ";
	cin >> m;
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

int TongChan(int a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			s = s + a[m - 1][j];
	return s;
}
