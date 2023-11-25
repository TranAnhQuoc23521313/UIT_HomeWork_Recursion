#include<iostream>
#include<iomanip>
using namespace std;

int TongChinhPhuong(int[][100], int, int);
bool ktChinhPhuong(int);

int main()
{
	int m, n;
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
	cout << "Tong cac so chinh phuong tren cac cot chi so le la: " << TongChinhPhuong(a, m, n);
	
	return 0;
}

int TongChinhPhuong(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongChinhPhuong(a, m - 1, n);
	for (int j = 0; j < n; j++) if (ktChinhPhuong(a[m - 1][j]) && j % 2 != 0)
		s = s + a[m - 1][j];
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