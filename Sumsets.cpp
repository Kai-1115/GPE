#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
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

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        sort(v.begin(),v.end(),greater<int>()); // 降排v

        map<int, vector<pair<int,int>>> mp; // 一個key可能有不同a, b
        for(int i = 0; i < n; ++i)
        {
            for(int j = i + 1; j<n;++j)
            {
                mp[v[i]+v[j]].push_back({i,j});
            }
        }
        
        bool found = false;
        int ans;

        for(int i = 0; i < n && !found; ++i)
        {
            for(int j = 0; j < n && !found;++j) 
            {
                if (i == j) continue;
                int sub = v[i] - v[j];

                if(mp.count(sub))
                {
                    for(auto &p : mp[sub])
                    {
                        int x = p.first;
                        int y = p.second;
                        if(i != x && i != y && j != x && j != y)
                        {
                            found = true;
                            cout << v[i] << endl;
                            break;
                        }
                    }
                }
            }
        }

        if(!found) cout << "no solution\n";
    }

    return 0;
}