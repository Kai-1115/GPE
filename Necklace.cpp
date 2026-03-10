#include <iostream>
#include <cmath>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double vt, vo;
    while(cin >> vt >> vo)
    {
        if(vt == 0 && vo == 0) break;
        double len = 0;
        int max = 0;
        bool op = false;

        for(double i = 1; i < (vt/vo); i+=1)
        {
            double curr = i*0.3*sqrt(vt/i-vo);
            // cout << curr << endl;
            if(abs(curr-len) <= 0.0000001) // if curr = len
            {
                cout << "0\n";
                op = true;
                break;
            }
            if(curr > len)
            {
                len = curr;
                max = i;
            }
        }
        if(!op) cout << max << endl;
    }
    
    return 0;
}