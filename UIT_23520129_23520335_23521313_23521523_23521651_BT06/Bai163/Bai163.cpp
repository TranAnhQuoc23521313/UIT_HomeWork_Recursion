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
void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void ThemViTri(int a[], int& n, int x, int vt)
{
	if (vt == n)
	{
		a[n] = x;
		n++;
		return;
	}
	HoanVi(a[vt], x);
	ThemViTri(a, n, x, vt + 1);
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}
int main()
{
	int n;
	int a[1000];
	int x;
	int vt;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap vi tri can them:";
	cin >> vt;
	Nhap(a, n);
	ThemViTri(a, n, x ,vt);
	Xuat(a, n);
	return 0;
}