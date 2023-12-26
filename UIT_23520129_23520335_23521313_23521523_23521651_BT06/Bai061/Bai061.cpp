#include<iostream>
using namespace std;

void qSort(int[], int, int);

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
	qSort(a, 0, n-1);
	cout << "Mang sau khi duoc sap xep: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}

void qSort(int a[], int l, int r)
{
	int p = a[(l + r) / 2];
	int i = l, j = r;
	while (i < j) {
		while (a[i] < p) {
			i++;
		}
		while (a[j] > p) {
			j--;
		}
		if (i <= j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r) {
		qSort(a, i, r);
	}
	if (l < j) {
		qSort(a, l, j);
	}
}