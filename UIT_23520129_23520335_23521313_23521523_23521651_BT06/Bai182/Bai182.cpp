#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void XuatBo3(float x, float y, float z)
{
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}

void LietKe(float a[], int n)
{
	if (n <= 2)
		return;
	for (int i = 0; i <= n - 3; i++)
		for (int j = i + 1; j <= n - 2; j++)
		{
			if (a[i] == (a[j] + a[n - 1]))
			{
				XuatBo3(a[i], a[j], a[n - 1]);
				XuatBo3(a[i], a[n - 1], a[j]);


			}
			if (a[j] == (a[i] + a[n - 1]))
			{
				XuatBo3(a[j], a[i], a[n - 1]);
				XuatBo3(a[j], a[n - 1], a[i]);
			}
			if (a[n - 1] == (a[i] + a[j]))
			{
				XuatBo3(a[n - 1], a[i], a[j]);
				XuatBo3(a[n - 1], a[j], a[i]);
			}
		}
	LietKe(a, n - 1);
}


int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}