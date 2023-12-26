#include <iostream>

using namespace std;

void Nhap(int[], int&);
int DemChan(int[], int);

int main()
{
    int n;
    int b[1000];
    Nhap(b, n);
    cout << "Ket qua: " << DemChan(b, n);
    return 0;
}

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

int DemChan(int a[], int n)
{
    if (n == 0)
        return 0;
    int dem = DemChan(a, n - 1);
    if ((a[n - 1]) % 2 == 0)
        dem = dem + 1;
    return dem;
}