// 10417: The Hotel with Infinite Rooms
#include <iostream>
#define LL long long
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    LL S, D;
    while(cin >> S >> D)
    {
        LL left = 0, right = 50000000;
        LL ans = 0;

        while(left <= right)
        {
            LL mid = (left + right) / 2;
            LL sum = mid * S + mid * (mid - 1) / 2; // mid時的sum
            
            if(sum >= D) // mid 大等於要的值
            {
                ans = mid; // 可以是答案
                right = mid - 1; // mid和mid的右半邊丟掉
            }
            else // mid 小於要的值
            {
                left = mid + 1; // mid和mid的左半邊丟掉
            }
        }
        cout << S + ans - 1 << endl; // 第n天的人數
    }

    return 0;
}