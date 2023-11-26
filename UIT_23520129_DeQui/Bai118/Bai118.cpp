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
bool ktChinhPhuong(int k)
{
	bool flag = false;
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			flag = true;
	return flag;
}
int ChinhPhuongDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChinhPhuongDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktChinhPhuong(a[n - 1]))
		return a[n - 1];
	return -1;
}
int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << ChinhPhuongDau(a, n);
	return 0;
}