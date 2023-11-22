#include <iostream>

using namespace std;

void Nhap(int [][500], int&, int&);
int DemDang2m(int [][500], int, int);
bool KtDang2m(int);

int main()
{
	int n, m;
	int a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: " << DemDang2m(a, m, n);
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

bool KtDang2m(int x)
{
	if (x < 0)
		return false;
	int temp = x;
	while (temp >= 1)
	{
		int dv = temp % 10;
		if (temp % 2 != 0)
			return false;
		temp /= 10;
	}
	return true;
}

int DemDang2m(int a[][500], int m, int n)
{
	if (m == 0)
		return 0;
	int Dem = DemDang2m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (KtDang2m(a[m - 1][j]))
			Dem++;
	return Dem;
}