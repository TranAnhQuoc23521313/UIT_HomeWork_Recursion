#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[][500], int&, int&);
int DemChinhPhuong(int[][500], int, int);
bool KtChinhPhuong(int);

int main()
{
	int n, m;
	int a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: " << DemChinhPhuong(a, m, n);
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

bool KtChinhPhuong(int x)
{
	if (x < 0)
		return 0;
	for (int i = 0; i <= sqrt(x); i++)
		if (i * i == x)
			return true;
	return false;
}

int DemChinhPhuong(int a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	int Dem = DemChinhPhuong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (KtChinhPhuong(a[m - 1][j]))
			Dem++;
	return Dem;
}