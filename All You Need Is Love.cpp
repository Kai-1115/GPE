#include <iostream>
#include <string>
#include <cmath>
#define LL long long
using namespace std;

LL btoi(string str)
{
    LL len = str.length();
    LL sum = 0;
    for (int i = 0; i < len; ++i)
    {
        sum += (str[i]-'0') * pow(2, len-i-1);
    }
    return sum;
}

LL gcd(LL a, LL b)
{
    while(b!=0)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Pair #" << i+1 << ": ";
        string s1, s2;
        cin >> s1;
        cin >> s2;

        LL n1 = btoi(s1);
        LL n2 = btoi(s2);

        LL g = gcd(n1, n2);
        
        if(g==1)
        {
            cout << "Love is not all you need!\n";
        }
        else
        {
            cout << "All you need is love!\n";
        }
    }

    return 0;
}