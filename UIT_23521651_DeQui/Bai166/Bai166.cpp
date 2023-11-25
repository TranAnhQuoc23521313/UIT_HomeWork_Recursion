#include<iostream>
#include<iomanip>
using namespace std;

void LietKe(int[], int, int);

int n;

int main()
{
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]: ";
		cin >> a[i];
	}
    cout << "Cac mang con la: " << endl;
	LietKe(a, 0, 0);
	return 0;
}

void LietKe(int a[], int s, int e)
{
    if (e == n)
        return;
    else if (s >= e)
        LietKe(a, 0, e + 1);
    else {
        cout << "[";
        for (int i = s; i < e; i++)
            cout << a[i] << ", ";
        cout << a[e] << "]" << endl;
        LietKe(a, s + 1, e);
    }
    return;
}