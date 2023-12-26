#include<iostream>
#include<iomanip>
using namespace std;

void GanNhat(float[], int);

int main()
{
	float n;
	float a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
	GanNhat(a, n);
	return 0;
}

void GanNhat(float a[], int n)
{
	int min, temp, d, c;
	min = abs(a[1] - a[0]);
	d = 0;
	c = 1;
	for (int i = 1; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			temp = abs(a[j] - a[i]);
			if (temp < min)
			{
				min = temp;
				d = i;
				c = j;
			}
		}
	}
	cout << "Hai gia tri gan nhau nhat trong mang la: " << a[d] << " va " << a[c];
}