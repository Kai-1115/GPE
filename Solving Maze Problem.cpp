#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char v[10][10];

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            cin >> v[i][j];
        }
    }

    stack<pair<int,int>> s;
    int endi, endj;

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if(v[i][j] == 'S')
            {
                s.push({i,j});
            }
            else if(v[i][j] == 'G')
            {
                endi = i;
                endj = j;
            }
        }
    }

    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,-1,1};
    
    while(!s.empty())
    {
        auto i = s.top();
        s.pop();
        
        v[i.first][i.second] = '+';

        if(i.first == endi && i.second == endj)
        {
            break;
        }

        // push 四個方向
        for(int j = 0;j<4;++j)
        {
            int x = i.first + dx[j];
            int y = i.first + dy[j];
            // cout << x << y << endl;

            if(x>=0 && x<10 && y>=0 && y<10 && v[x][y]=='.')
            {
                s.push({x,y});
            }
        }

    }

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            cout << v[i][j];
        }
        cout << endl;
    }


    return 0;
}