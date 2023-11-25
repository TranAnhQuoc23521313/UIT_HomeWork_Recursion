#include<iostream>
#include<iomanip>
using namespace std;

int TongCot(int[][100], int, int, int);
bool ktChinhPhuong(int);

int main()
{
	int m, n, c;
	int a[100][100];
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
	cout << "Nhap cot c: ";
	cin >> c;
	cout << "Tong cac so chinh phuong tren cot c la: " << TongCot(a, m, n, c);

	return 0;
}

int TongCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int s = TongCot(a, m - 1, n, c);
	if (ktChinhPhuong(a[m - 1][c]))
		s = s + a[m - 1][c];
	return s;
}

bool ktChinhPhuong(int k)
{
	bool flag = false;
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			flag = true;
	return flag;
}