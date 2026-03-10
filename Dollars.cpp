#include <iostream>
#include <vector>
#include <iomanip>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> coin = {1,2,4,10,20,40,100,200,400,1000,2000};
    vector<LL> dp(6005,0);
    dp[0] = 1;
    
    for(int c : coin)
    {
        for(int i = c;i<6005;++i)
        {
            dp[i] += dp[i-c];
        }
    }

    double d;
    while(cin >> d)
    {
        if(d == 0) break;
        int t = d * 20;
        cout << setw(6) << fixed << setprecision(2) << d << setw(17) << dp[t] << endl;
    }

}