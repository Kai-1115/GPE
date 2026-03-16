#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    while(cin >> n && n)
    {

        map<vector<int>,int> mp;
        
        for(int i = 0;i<n;++i)
        {
            vector<int> v(5);
            
            for(int j = 0;j<5;++j)
                cin >> v[j];
                
            sort(v.begin(), v.end());
            mp[v]++;
        }
        

        int m = 0;
        for(auto p : mp)
            m = max(m, p.second);
        
        int sum = 0;
        for(auto p : mp)
            if(p.second == m)
                sum += p.second;

        cout << sum << endl;
    }

    

    
    return 0;
}