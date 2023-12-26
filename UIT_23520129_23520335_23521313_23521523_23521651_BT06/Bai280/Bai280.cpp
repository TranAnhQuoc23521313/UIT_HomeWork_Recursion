#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&, int&);
void ThemCot(float[][500], int, int&, int);
void Xuat(float[][500], int, int);

int main()
{
	int n, m, cot;
	float a[500][500];
	Nhap(a, m, n, cot);
	cout << "Ket qua: \n";
	ThemCot(a, m, n, cot);
	Xuat(a, m, n);
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

void ThemCot(float a[][500], int m, int& n, int cot)
{
	if (m == 0)
	{
		n++;
		return;
	}
	ThemCot(a, m - 1, n, cot);
	for (int j = n; j > cot; j--)
		a[m - 1][j] = a[m - 1][j - 1];
	a[m - 1][cot] = 0;
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