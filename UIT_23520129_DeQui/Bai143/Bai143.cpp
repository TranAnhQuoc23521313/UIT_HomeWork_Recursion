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
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}
int ktTonTaiNguyenTo(int a[], int n)
{
	if (n == 0)
		return 0;
	if (ktNguyenTo(a[n - 1]))
		return 1;
	return ktTonTaiNguyenTo(a, n - 1);
}
int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << ktTonTaiNguyenTo(a, n);
	return 0;
}