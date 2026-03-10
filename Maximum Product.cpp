#include <iostream>
#include <vector>
#include <algorithm>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int t = 1;
    while (cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        
        LL max = 0;
        for(int i = 0; i < n;++i)
        {
            LL sum = 1;
            for(int j = i; j < n;++j)
            {
                sum *= v[j];
                if(sum > max) max = sum;
            }
        }

        
        cout << "Case #" << t << ": The maximum product is " << max << ".\n\n";
        t++;
    }

    return 0;
}