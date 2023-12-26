#include<iostream>
#include<iomanip>
using namespace std;

void HoanVi(int&, int&);
void NguyenToTang(int[], int);
bool ktNguyenTo(int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	NguyenToTang(a, n);
	cout << "Cac so nguyen to tang dan la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}


void NguyenToTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (ktNguyenTo(a[i]) && ktNguyenTo(a[n - 1]) && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
	NguyenToTang(a, n - 1);
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

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}