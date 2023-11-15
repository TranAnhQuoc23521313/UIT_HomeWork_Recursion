#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&, float&, float&);
void LietKe(float[], int, float, float);

int main()
{
    int n;
    float b[1000];
    float x, y;
    Nhap(b, n, x, y);
    LietKe(b, n, x, y);
    return 0;
}

void Nhap(float a[], int& n, float& x, float& y)
{
    cout << "Nhap N: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap A[" << i << "]: ";
        cin >> a[i];
    }
    cout << "Nhap vao gia tri X: ";
    cin >> x;
    cout << "Nhap vao gia tri Y: ";
    cin >> y;
}

void LietKe(float a[], int n, float x, float y)
{
    if (n == 0)
        return;
    LietKe(a, n - 1, x, y);
    if (x <= a[n - 1] && a[n - 1] <= y)
        cout << setw(10) << setprecision(3) << a[n - 1];
}