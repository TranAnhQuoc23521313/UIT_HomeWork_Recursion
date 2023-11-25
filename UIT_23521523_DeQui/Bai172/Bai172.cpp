
#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

bool is_subarray(float* a, float* b, int n, int m) {
    // Điều kiện dừng
    if (n == 0) {
        // Mảng a rỗng
        return true;
    }

    // Nếu độ dài của mảng a lớn hơn độ dài của mảng b
    if (n > m) {
        // Mảng a không thể là mảng con trong mảng b
        return false;
    }

    // Nếu phần tử đầu tiên của mảng a không khớp với phần tử đầu tiên của mảng b
    if (a[0] != b[0]) {
        // Mảng a không phải là mảng con trong mảng b
        return false;
    }

    // Bước đệ quy
    // Xét mảng a[1, ..., n] và mảng b[1, ..., m-1]
    return is_subarray(a + 1, b + 1, n - 1, m - 1);
}

int main()
{
	float a[100],b[100];
	int n,m;
	Nhap(a, n);
    Nhap(b, m);
    if (is_subarray(a,b,n,m)) cout << "Phai";
    else cout << "Khong";
	return 0;
}