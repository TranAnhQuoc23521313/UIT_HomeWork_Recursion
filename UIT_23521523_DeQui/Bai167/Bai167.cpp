#include <iostream>

using namespace std;

// Hàm kiểm tra xem hai số thực có liên tiếp hay không
bool is_consecutive(double a, double b) {
    return (b - a) == 1;
}

// Hàm liệt kê các dãy con tăng của mảng các số thực
void print_increasing_subarrays(double* a, int n) {
    // Điều kiện dừng
    if (n == 0) {
        // Mảng rỗng
        return;
    }

    // Bước đệ quy
    // Xét mảng a[0, ..., n-1]
    print_increasing_subarrays(a, n - 1);

    // Thêm phần tử a[n] vào cuối các dãy con tăng của mảng a[0, ..., n-1]
    for (int i = 0; i < n - 1; i++) {
        // Kiểm tra xem a[n] có liên tiếp với a[i] hay không
        if (is_consecutive(a[n], a[i])) {
            // Thêm phần tử a[n] vào cuối dãy con
            double* b = new double[i + 2];
            for (int j = 0; j <= i; j++) {
                b[j] = a[j];
            }
            b[i + 1] = a[n];

            // In dãy con tăng
            cout << "[ ";
            for (int j = 0; j <= i + 1; j++) {
                cout << b[j] << " ";
            }
            cout << "]" << endl;
        }
    }

    // Trả về mảng a ban đầu
    a[n] = a[0];
}

int main() {
    double a[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(a) / sizeof(a[0]);

    // In mảng a ban đầu
    cout << "Mảng a ban đầu: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Liệt kê các dãy con tăng của mảng a
    print_increasing_subarrays(a, n);

    return 0;
}
