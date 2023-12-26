#include <iostream>

using namespace std;

void Nhap(int[][500], int&, int&, int&);
int TongDong(int[][500], int, int, int);
bool KtDoiXung(int);

int main()
{
	int n, m, dong;
	int a[500][500];
	Nhap(a, m, n, dong);
	cout << "Ket qua: " << TongDong(a,m,n,dong);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& dong)
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

int TongDong(int a[][500], int m, int n, int dong)
{
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n - 1, dong);
	if (KtDoiXung(a[dong][n - 1]))
		s += a[dong][n - 1];
	return s;
}

bool KtDoiXung(int x)
{
	int daonguoc = 0;
	int temp = x;
	while (temp != 0)
	{
		daonguoc = daonguoc * 10 + temp % 10;
		temp /= 10;
	}
	return (x == daonguoc);
}