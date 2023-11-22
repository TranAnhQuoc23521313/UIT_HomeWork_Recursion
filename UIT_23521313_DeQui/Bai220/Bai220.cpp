#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
int TongCot(int[][500], int, int, int);

int main()
{
	int n, m, cot;
	int a[500][500];
	Nhap(a, m, n, cot);
	cout << "Ket qua: " << TongCot(a,m,n,cot);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& cot)
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
	cout << "Nhap Cot: ";
	cin >> cot;
}

int TongCot(int a[][500], int m, int n, int cot)
{
	if (m == 0)
		return 0;
	int s = TongCot(a, m - 1, n, cot);
	if (a[m - 1][cot] % 2 != 0)
		s += a[m - 1][cot];
	return s;
}