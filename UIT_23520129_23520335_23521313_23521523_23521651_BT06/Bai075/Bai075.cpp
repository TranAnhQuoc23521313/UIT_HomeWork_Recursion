#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);
int KtToanLe(int);

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

int KtToanLe(int x)
{
    x = abs(x);
    if (x <= 9)
    {
        if (x % 2 == 0)
            return 0;
        return 1;
    }
    int dv = x % 10;
    if (dv % 2 != 0 && KtToanLe(x / 10) == 1)
        return 1;
    return 0;
}

void LietKe(int a[], int n)
{
    if (n == 0)
        return;
    LietKe(a, n - 1);
    if (KtToanLe(a[n - 1]) == 1)
        cout << setw(6) << a[n - 1];
}