#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xoa(float array[], int& n) {

	int i;
	for (i = 0; i < n; i++) {
		if (array[i] < 0) {
			break;
		}
	}
	if (i == n) return;
		for (int j = i; j < n - 1; j++) 
		{
			array[j] = array[j+1];
		}
		n--;

	Xoa(array, n);
}

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xoa(a, n);
	for (int i = 0; i < n; i++) cout << a[i];
	return 0;
}