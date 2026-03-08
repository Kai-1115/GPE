#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#define LL long long
using namespace std;

void bangla(LL n)
{
        if (n >= 10000000)
        {
            bangla(n / 10000000);
            cout << " kuti";
            n %= 10000000;
        }
        if (n >= 100000)
        {
            cout << " " << n / 100000 << " lakh";
            n %= 100000;
        }
        if (n >= 1000)
        {
            cout << " " << n / 1000 << " hajar";
            n %= 1000;
        }
        if (n >= 100)
        {
            cout << " " << n / 100 << " shata";
            n %= 100;
        }
        if (n > 0)
        {
            cout << " " << n;
            n = 0;
        }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL n;
    int t = 1;
    while (cin >> n)
    {
        cout << setw(4) << t << ".";
        t++;
        if (n == 0)
            cout << " 0";
        else
        {
            bangla(n);
        }
        cout << endl;
    }

    return 0;
}