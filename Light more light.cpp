#include <iostream>
#include <cmath>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    LL n;
    while(cin >> n)
    {
        if(n == 0) break;
        LL q = sqrt(n);
        if(q * q == n) cout << "yes\n";
        else cout << "no\n";
    }
    
    return 0;
}