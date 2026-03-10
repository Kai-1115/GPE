#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        map<vector<int>, int> mp;

        for (int i = 0; i < n; ++i)
        {
            vector<int> c(5);
            for (int j = 0; j < 5; ++j)
                cin >> c[j];

            sort(c.begin(), c.end());
            mp[c]++;
        }

        int m = 0, sum = 0;
        for (auto &p : mp)
            m = max(m, p.second);
            
        for (auto &p : mp)
        {
            if (p.second == m)
                sum += p.second;
        }

        cout << sum << endl;
    }
    return 0;
}