#include <iostream>
#include <vector>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for(int i = 0; i < t;++i)
    {
        int n;
        cin >> n;
        vector<vector<char>> bomb(n,vector<char>(n));
        vector<vector<char>> note(n,vector<char>(n));
        vector<vector<char>> num(n,vector<char>(n,0));
        
        for(int j = 0;j<n;++j)
        {
            for(int k = 0;k<n;++k)
            {
                cin >> bomb[j][k];
            }
        }
        for(int j = 0;j<n;++j)
        {
            for(int k = 0;k<n;++k)
            {
                cin >> note[j][k];
            }
        }

        for(int j = 0;j<n;++j)
        {
            for(int k = 0;k<n;++k)
            {
                if(bomb[j][k] == '*')
                {
                    
                }
            }
        }
        
    }
    
    return 0;
}