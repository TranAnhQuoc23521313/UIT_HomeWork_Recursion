#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
    int n;
    float b[1000];
    Nhap(b, n);
    cout << "Ket qua: " << endl;
    LietKe(b, n);
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

void LietKe(float a[], int n)
{
    if (n <= 2)
        return;
    if (a[n - 2] < abs(a[n - 1]) && a[n - 2] > a[n - 3])
        cout << setw(10) << setprecision(3) << a[n - 2];
    LietKe(a, n - 1);
}