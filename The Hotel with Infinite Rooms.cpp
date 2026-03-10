// AC, 0.1ms
#include <iostream>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    LL s, d;
    while(cin >> s >> d)
    {
        LL sum = 0, i;
        for(i = s;;i++)
        {
            sum += i;
            if(sum >= d) break;
        }
        cout << i << endl;
    }    
    
    return 0;
}