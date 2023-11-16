#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
int TimViTri(float[], int);

int main()
{
    int n;
    float b[1000];
    Nhap(b, n);
    cout << "Ket qua: " << TimViTri(b, n);
    return 0;
}

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

int TimViTri(float a[], int n)
{
    if (n == 1)
        return 0;
    int lc = TimViTri(a, n - 1);
    if (a[n - 1] < a[lc])
        lc = n - 1;
    return lc;
}
