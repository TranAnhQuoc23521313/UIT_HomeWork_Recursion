#include <iostream>
using namespace std;
void Nhap(float a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap A[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "Mang con tang bat dau tu a[" << i << "]: ";
        int j = i;
        float tong = 0.0;
        while (j < n - 1 && a[j] < a[j + 1])
        {
            cout << a[j] << " ";
            tong += a[j];
            ++j;
        }
        cout << a[j] << endl;
        tong += a[j];
        cout << "Tong cua mang con tang: " << tong << endl;
        i = j;
    }
}

int main()
{
    const int MAX_SIZE = 100;
    float arr[MAX_SIZE];
    int n;
    cout << "Nhap so phan tu cua mang: ";
    Nhap(arr, n);
    LietKe(arr, n);
    return 0;
}
