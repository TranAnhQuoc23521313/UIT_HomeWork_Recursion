#include<iostream>
using namespace std;

void Nhap(int a[], int& n);
int DauTien(int a[], int n, int x, int y);

int main() {
    int a[100];
    int n;
    Nhap(a, n);
    int x, y;
    cout << "Nhap khoang (x, y): ";
    cin >> x >> y;
    cout << "Gia tri dau tien trong mang nam trong khoang (" << x << ", " << y << ") la: " << DauTien(a, n, x, y);
    return 0;
}

int DauTien(int a[], int n, int x, int y) {
    if (n == 0)
        return x;
    int lc = DauTien(a, n - 1, x, y);
    if (lc != x)
        return lc;
    if (a[n - 1] > x && a[n - 1] < y)
        return a[n - 1];
    return x;
}

void Nhap(int a[], int& n) {
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}
