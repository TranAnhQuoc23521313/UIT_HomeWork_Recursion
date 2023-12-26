#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);

int main()
{
    int n;
    int b[1000];
    Nhap(b, n);
    LietKe(b, n);
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

void LietKe(int a[], int n)
{
    if (n == 0)
        return;
    LietKe(a, n - 1);
    if (a[n - 1] % 2 == 0)
        cout << setw(6) << a[n - 1];
}