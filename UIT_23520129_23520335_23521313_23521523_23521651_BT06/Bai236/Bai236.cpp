#include<iostream>
#include<iomanip>
using namespace std;

int DemNguyenTo(int[][100], int, int, int);

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
	cout << "Tong cac so chinh phuong tren cot c la: " << DemNguyenTo(a, m, n, c);

	return 0;
}

int DemNguyenTo(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemNguyenTo(a, m - 1, n, c);
	if (ktNguyenTo(a[m - 1][c]))
		dem = dem + 1;
	return dem;
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}