#include <iostream>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    while(cin >> n)
    {
        int ans = n;
        int emp = n;
        while(emp >= 3)
        {
            ans += emp / 3;
            emp = emp / 3 + emp % 3; 
        }
        if(emp == 2) ans++; // 只有兩瓶可以靠借多喝一瓶
        cout << ans << endl;
    }
    
    return 0;
}