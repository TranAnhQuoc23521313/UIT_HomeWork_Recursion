#include<iostream>
#include<iomanip>

using namespace std;

float Tong(int);

int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;

    cout << "Tong S: " << fixed << setprecision(5) << Tong(n);
    return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 1;
	float s = Tong(n - 1);
	return (s + (float)1 / (2 * n + 1));
}
