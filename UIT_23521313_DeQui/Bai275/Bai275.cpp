#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void SapCotTang(float a[][500], int m, int n, int cot);
void SapCotGiam(float a[][500], int m, int n, int cot);
void SapXep(float a[][500], int m, int n);
void Xuat(float[][500], int, int);

int main()
{
	int n, m;
	float a[500][500];
	Nhap(a, m, n);
	cout << "Ket qua: \n";
	SapXep(a, m, n);
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

void SapCotTang(float a[][500], int m, int n, int cot)
{
	if (m == 0)
		return;
	for (int i = 0; i < m - 1; i++)
		if (a[i][cot] > a[m - 1][cot])
			swap(a[i][cot], a[m - 1][cot]);
	SapCotTang(a, m - 1, n, cot);
}

void SapCotGiam(float a[][500], int m, int n, int cot)
{
	if (m == 0)
		return;
	for (int i = 0; i < m - 1; i++)
		if (a[i][cot] < a[m - 1][cot])
			swap(a[i][cot], a[m - 1][cot]);
	SapCotGiam(a, m - 1, n, cot);
}

void SapXep(float a[][500], int m, int n)
{
	if (n == 0)
		return;
	if ((n - 1) % 2 == 0)
		SapCotGiam(a, m, n, n - 1);
	else
		SapCotTang(a, m, n, n - 1);
	SapXep(a, m, n - 1);
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