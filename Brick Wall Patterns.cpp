#include <iostream>
#include <vector>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<LL> dp(100,0);
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i<=50;++i)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    int n;
    while(cin >> n)
    {
        if(n == 0) break;
        else cout << dp[n] << endl;
    }
    
    return 0;
}