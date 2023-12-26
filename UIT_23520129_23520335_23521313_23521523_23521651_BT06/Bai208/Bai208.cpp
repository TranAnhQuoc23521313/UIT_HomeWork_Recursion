#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[][100], int& m, int& n)
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
bool ktToanChan(int k)
{
	bool flag = true;
	for (int t = k = abs(k); t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = false;
	}
	return flag;
}
int TongToanChan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongToanChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktToanChan(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}
int main()
{
	int m, n;
	int a[100][100];
	Nhap(a, m, n);
	cout << TongToanChan(a, m, n);
	return 0;
}