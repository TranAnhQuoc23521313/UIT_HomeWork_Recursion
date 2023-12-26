#include<iostream>
#include<iomanip>
using namespace std;

void XoaViTri(float[], int&, int);

int main()
{
	float a[100];
	int n, vt;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap vi tri can xoa: ";
	cin >> vt;
	XoaViTri(a, n, vt);
	cout << "Mang sau khi xoa: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}


void XoaViTri(float a[], int& n, int vt)
{
	if (vt == (n - 1))
	{
		n--;
		return;
	}
	a[vt] = a[vt + 1];
	XoaViTri(a, n, vt + 1);
}