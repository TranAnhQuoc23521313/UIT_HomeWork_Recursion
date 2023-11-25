#include<iostream>
#include<iomanip>
using namespace std;

float XaNhat(float[], int, float);

int main()
{
	float n, a[100], x;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap x: ";
	cin >> x;
	cout << "Gia tri xa gia tri x nhat la: " << XaNhat(a, n, x);
	return 0;
}


float XaNhat(float a[], int n, float x)
{
	if (n == 1)
		return a[0];
	float lc = XaNhat(a, n - 1, x);
	if (abs(a[n - 1] - x) > abs(lc - x))
		lc = a[n - 1];
	return lc;
}