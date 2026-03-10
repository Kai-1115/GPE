
#include <iostream>
#include <vector>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n, count = 0;
    bool first = true;
    while(cin >> m >> n)
    {
        if(m == 0 || n == 0) break;
        count++;
        if(!first) cout << endl;
        first = false;
        cout << "Field #" << count << ":\n"; 
        vector<vector<char>> v(m,vector<char>(n));
        for(int i = 0;i<m;++i)
        {
            for(int j = 0;j<n;++j)
            {
                cin >> v[i][j];
            }
        }
        
        vector<vector<char>> ans(m,vector<char>(n,'0'));
        for(int i = 0;i<m;++i)
        {
            for(int j = 0;j < n;++j)
            {
                if(v[i][j] == '*')
                {
                    ans[i][j] = '*';
                    if(i-1>=0 && j-1>=0 && ans[i-1][j-1] != '*') ans[i-1][j-1]++; // left top
                    if(i-1>=0 && ans[i-1][j]!='*') ans[i-1][j]++; // top
                    if(i-1>=0 && j+1<n && ans[i-1][j+1]!='*') ans[i-1][j+1]++; // right top
                    if(j-1>=0 && ans[i][j-1]!='*') ans[i][j-1]++; //left
                    if(j+1<n && ans[i][j+1]!='*') ans[i][j+1]++; // right
                    if(i+1<m && j-1>=0 && ans[i+1][j-1]!='*') ans[i+1][j-1]++; // left bottom
                    if(i+1<m && ans[i+1][j]!='*') ans[i+1][j]++; // bottom
                    if(i+1<m && j+1<n && ans[i+1][j+1]!='*') ans[i+1][j+1]++; // right bottom
                }
            }
        }
        
        for(int i = 0;i<m;++i)
        {
            for(int j = 0;j<n;++j)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }    
    
    return 0;
}