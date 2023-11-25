#include <iostream>
using namespace std;


int ch(int);
int main()
{
    int k, n;
    cout << "Nhap k: ";
    cin >> k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Chinh hop la: " << ch(n) / ch(n - k);
}

int i = 1;
int ch(int a)
{
    int k;
    k = 1;
    if (a == 0)
    {
        return(k);
    }
    else
    {
            k = k * i;
            return ch(a - 1);
            i++;
    }
    return(k);
}