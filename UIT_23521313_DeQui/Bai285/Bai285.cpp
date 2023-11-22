#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void BienDoi(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	int n, m;
	float a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: \n";
	BienDoi(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

void BienDoi(float a[][500], int m, int n)
{
	if (m == 0)
		return;
	BienDoi(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] < 0)
			a[m - 1][j] = -a[m - 1][j];
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}