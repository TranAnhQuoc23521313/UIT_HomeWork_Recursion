#include <iostream>
using namespace std;
void NhapMang(int arr[], int n)
{
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
}
int DemCapChan(int arr[], int n, int index)
{
    if (n <= 1) {
        return 0;
    }
    int dem = (arr[index] % 2 == 0 && arr[index + 1] % 2 == 0) ? 1 : 0;
    return dem + DemCapChan(arr + 1, n - 1, index + 1);
}

int main()
{
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    NhapMang(arr, n);
    int ketqua = DemCapChan(arr, n - 1, 0);
    cout << "So luong cac cap phan tu k? nhau ma c? hai deu chan la: " << ketqua << endl;
    return 0;
}
