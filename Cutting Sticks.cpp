#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l;
    while (cin >> l && l)
    {
        int n;
        cin >> n;

        vector<int> cut(n + 2);
        cut[0] = 0;
        cut[n + 1] = l;

        for (int i = 1; i <= n; i++)
        {
            cin >> cut[i];
        }

        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

        for (int len = 2; len <= n + 1; len++)
        {
            for (int i = 0; i + len <= n + 1; i++)
            {
                int j = i + len;
                dp[i][j] = INT_MAX;

                for (int k = i + 1; k < j; k++)
                {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + cut[j] - cut[i]);
                }

                if (dp[i][j] == INT_MAX)
                    dp[i][j] = 0;
            }
        }

        cout << "The minimum cutting is " << dp[0][n + 1] << ".\n";
    }

    return 0;

    return 0;
}