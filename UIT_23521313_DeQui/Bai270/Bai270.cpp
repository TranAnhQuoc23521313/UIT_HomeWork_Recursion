#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&, int&);
void SapDongTang(float[][500], int, int, int);
void Xuat(float[][500], int, int);

int main()
{
	int n, m, dong;
	float a[500][500];
	Nhap(a, m, n, dong);
	cout << "Ket qua: \n";
	SapDongTang(a, m, n, dong);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& dong)
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
	cout << "Nhap Dong: ";
	cin >> dong;
}

void SapDongTang(float a[][500], int m, int n, int dong)
{
	if (n == 0)
		return;
	for (int j = 0; j < n - 1; j++)
		if (a[dong][j] > a[dong][n - 1])
			swap(a[dong][j], a[dong][n - 1]);
	SapDongTang(a, m, n - 1, dong);
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