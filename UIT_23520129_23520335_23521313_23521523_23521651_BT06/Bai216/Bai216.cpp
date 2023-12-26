#include<iostream>
#include<iomanip>
using namespace std;

float TongDong(float[][100], int, int, int);
bool ktDoiXung(int);

int main()
{
	int m, n, d;
	float a[100][100];
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	cout << "Nhap dong d: ";
	cin >> d;
	cout << "Tong cac gia tri tren dong d la: " << TongDong(a, m, n, d);

	return 0;
}

float TongDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	float s = TongDong(a, m, n - 1, d);
	if (ktDoiXung(a[d][n - 1]))
		s = s + a[d][n - 1];
	return s;
}

bool ktDoiXung(int k)
{
	k = abs(k);
	int dn = 0;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}
	if (dn == k)
		return true;
	return false;
}