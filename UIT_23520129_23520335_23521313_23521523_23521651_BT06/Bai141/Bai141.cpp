#include<iostream>
#include<iomanip>
using namespace std;

int ktTonTai(int[], int);

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
	if (ktTonTai(a, n) == 1)
		cout << "Ton tai hai gia tri 0 lien tiep";
	else cout << "Khong ton tai hai gia tri 0 lien tiep";
	return 0;
}

int ktTonTai(int a[], int n)
{
	if (n <= 1)
		return 0;
	if (a[n - 1] == 0 && a[n - 2] == 0)
		return 1;
	return ktTonTai(a, n - 1);
}