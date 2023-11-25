#include<iostream>
using namespace std;

void Nhap(float a[], int& n);
void Xuat(float a[], int n);
void LietKe(float a[], int n, int i = 0);

int main()
{
	int n;
	float a[1000];

	Nhap(a, n);
	LietKe(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void LietKe(float a[], int n, int i)
{
	if (i == n)
	{
		return;
	}

	if (a[i] > 0)
	{
		int j = i;
		while (j < n && a[j] > 0)
		{
			cout << a[j] << " ";
			j++;
		}
		cout << endl;
	}

	LietKe(a, n, i + 1);
}
