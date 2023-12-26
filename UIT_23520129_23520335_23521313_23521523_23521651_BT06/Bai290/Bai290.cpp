#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void DichPhaiDong(float[][500], int, int, int);
void DichPhai(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	int n, m;
	float a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: \n";
	DichPhai(a, m, n);
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

void DichPhaiDong(float a[][500], int m, int n, int d)
{
	float temp = a[d][n - 1];
	for (int j = n - 1; j >= 1; j--)
		a[d][j] = a[d][j - 1];
	a[d][0] = temp;
}

void DichPhai(float a[][500], int m, int n)
{
	if (m == 0)
		return;
	DichPhai(a, m - 1, n);
	DichPhaiDong(a, m, n, m - 1);
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