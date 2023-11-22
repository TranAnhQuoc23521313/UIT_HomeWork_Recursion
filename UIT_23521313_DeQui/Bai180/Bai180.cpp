#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float [], int&);
void XuatBo2(float, float);
void LietKe(float[], int);

int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	cout << "Ket qua: \n";
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A{" << i << "]: ";
		cin >> a[i];
	}
}

void XuatBo2(float x, float y)
{
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << ")" << endl;
}

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		XuatBo2(a[i], a[n - 1]);
		XuatBo2(a[n-1], a[i]);
	}
	LietKe(a, n - 1);
}