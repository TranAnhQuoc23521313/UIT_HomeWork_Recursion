#include<iostream>
#include<iomanip>
using namespace std;

int TimGiaTri(int[], int);
bool ktDang5m(int);

int main()
{
	int n, a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Gia tri lon nhat co dang 5m la: " << TimGiaTri(a, n);
	return 0;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (!ktDang5m(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}

bool ktDang5m(int k)
{
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 5) if (t % 5 != 0)
		flag = false;
	return flag;
}