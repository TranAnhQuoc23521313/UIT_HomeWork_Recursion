#include <iostream>
#include <iomanip>

using namespace std;

void LietKe(int);

int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;

    cout << "Ket qua: ";
    LietKe(n);
    return 0;
}

void LietKe(int n)
{
    if (n == 1)
    {
        cout << setw(8) << n;
        return;
    }
    cout << setw(8) << n;
    if (n % 2 == 0)
        LietKe(n / 2);
    else
        LietKe(3 * n + 1);
}