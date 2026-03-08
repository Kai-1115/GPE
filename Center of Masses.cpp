#include <iostream>
#include <vector>
#include <cmath>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    while(cin >> N)
    {
        if(N < 3) break;
        
        double sx = 0, sy = 0;
        for(int i = 0; i < N; ++i)
        {
            int x, y;
            cin >> x >> y;
            sx += x;
            sy += y;
        }
        sx /= N;
        sy /= N;
        cout << round(sx*1000)/1000 << " " << round(sy*1000)/1000 << endl;
    }   
    
    return 0;
}