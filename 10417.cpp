// 10417: The Hotel with Infinite Rooms
#include <iostream>
#include <vector>
#define LL long long
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main()
{
    IOS

    LL S, D;
    while(cin >> S >> D)
    {
        LL left = 0, right = LLONG_MAX/10;
        LL ans = 0;
        
        while(left <= right)
        {
            LL mid = (left+right)/2;
            // sum = kS+k(k-1)/2
            
        }

    }
    

    return 0;
}


