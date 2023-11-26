#include <iostream>
using namespace std;
void Nhap(int a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}
bool ktDang2m(int k)
{
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 2)
	{
		int du = t % 2;
		if (du != 0)
			flag = false;
	}
	return flag;
}
int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (lc != 0)
		return lc;
	if (ktDang2m(a[n - 1]))
		return a[n - 1];
	return 0;
}
int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << TimGiaTri(a, n);
	return 0;
}