#include<iostream>
#include<iomanip>
using namespace std;

void SapDongGiam(float[][100], int, int, int);
void HoanVi(float&, float&);

int main()
{
	int m, n, d, k, l;
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
	k = m;
	l = n;
	cout << "Nhap hang d: ";
	cin >> d;
	SapDongGiam(a, m, n, d);
	cout << "Ma tran sau khi sap xep hang d la: " << endl;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

void SapDongGiam(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return;
	for (int j = 0; j <= n - 2; j++)
		if (a[d][j] < a[d][n - 1])
			HoanVi(a[d][j], a[d][n - 1]);
	SapDongGiam(a, m, n - 1, d);
}

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}