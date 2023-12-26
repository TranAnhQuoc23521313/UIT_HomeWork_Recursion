#include <iostream>

using namespace std;

void Nhap(float[][500], int&, int&, int&);
int DemAm(float[][500], int, int, int);

int main()
{
	int n, m, cot;
	float a[500][500];
	Nhap(a, m, n, cot);
	cout << "Ket qua: " << DemAm(a, m, n, cot);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& cot)
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

int DemAm(float a[][500], int m, int n, int cot)
{
	if (m == 0)
		return 0;
	int Dem = DemAm(a, m - 1, n, cot);
	if (a[m - 1][cot] < 0)
		Dem++;
	return Dem;
}