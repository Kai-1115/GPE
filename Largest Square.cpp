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
    while(t--)
    {
        int m, n, q;
        cin >> m >> n >> q;
        cout << m << n << q << endl;
        vector<vector<char>> v(m,vector<char>(n));

        for(int i = 0;i<m;++i)
        {
            for(int j = 0;j<n;++j)
            {
                cin >> v[i][j];
            }
        }

        for(int i = 0;i<q;++i)
        {
            int r, c;
            cin >> r >> c;
            while(1)
            {
                if(r)
            }
        }
    }   
    
    return 0;
}