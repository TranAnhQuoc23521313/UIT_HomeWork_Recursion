#include <iostream>
using namespace std;
void NhapMang(int a[], int& n)
{
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
}
int DemCon(int a[], int nA, int b[], int nB)
{
    int dem = 0;
    for (int i = 0; i <= nB - nA; ++i)
    {
        bool trungHop = true;
        for (int j = 0; j < nA; ++j)
        {
            if (a[j] != b[i + j])
            {
                trungHop = false;
                break;
            }
        }
        if (trungHop)
            dem++;
    }

    return dem;
}

int main()
{
    const int MAX_SIZE = 100;

    int arrA[MAX_SIZE];
    int arrB[MAX_SIZE];
    int nA, nB;
    NhapMang(arrA, nA);
    NhapMang(arrB, nB);
    int soLanXuatHien = DemCon(arrA, nA, arrB, nB);
    cout << "So lan xuat hien cua mang a trong mang b la: " << soLanXuatHien << endl;
    return 0;
}
