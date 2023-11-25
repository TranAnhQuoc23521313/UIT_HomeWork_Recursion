#include<iostream>
#include<iomanip>
using namespace std;

int DemNguyenToPhanBiet(int[], int);
bool ktNguyenTo(int);

int main()
{
    int a[100], n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
  
    return 0;
}

int DemNguyenToPhanBiet(int a[], int n)
{
    if (n == 0)
        return 0;
    int dem = DemNguyenToPhanBiet(a, n - 1);
    int flag = 1;
    for (int i = 0; i <= n - 2; i++)
        if (a[i] == a[n - 1])
            flag = 0;
    if (flag == 1 && ktNguyenTo(a[n - 1]))
        dem++;
    return dem;
}

bool ktNguyenTo(int k)
{
    int dem = 0;
    for (int i = 1; i <= k; i++)
        if (k % i == 0)
            dem++;
    if (dem == 2)
        return true;
    return false;
}