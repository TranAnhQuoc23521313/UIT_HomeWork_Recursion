#include<iostream>
#include<iomanip>
using namespace std;

void DemConGiam(int[], int, int);

int n;
int dem = 0;

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
    cout << "So mang con giam la: ";
    DemConGiam(a, 0, 0);
    cout << dem;
    return 0;
}



void DemConGiam(int a[], int s, int e)
{
    if (e == n)
        return;
    else if (s >= e)
        DemConGiam(a, 0, e + 1);
    else {
        bool flag = true;
        for (int i = s; i <= e; i++)
            if (i > s)
                if (a[i] > a[i - 1])
                    flag = false;
        if (flag)
            dem++;
        DemConGiam(a, s + 1, e);
    }
}