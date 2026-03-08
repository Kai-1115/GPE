#include <iostream>
#include <set>
#include <tuple>
#include <sstream>
#include <vector>
#define LL long long
using namespace std;

LL gcd(LL a, LL b)
{
    a=abs(a); b=abs(b);
    while(b!=0)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL N;
    cin >> N;
    while (N--)
    {
        set<tuple<LL, LL, LL>> line; // ax + by = c
        vector<pair<LL, LL>> dot;     // (x, y)

        LL k;
        cin >> k;

        for (LL i = 0; i < k; ++i)
        {
            LL x, y;
            cin >> x >> y;
            dot.push_back({x, y});
        }

        for (LL i = 0; i < k; ++i)
        {
            for (LL j = i + 1; j < k; ++j)
            {
                // (x1,y1) (x2,y2)
                // a = y2-y1
                // b = x1-x2
                LL x1 = dot[i].first;
                LL y1 = dot[i].second;
                LL x2 = dot[j].first;
                LL y2 = dot[j].second;

                if(x1==x2 && y1==y2) continue; // 兩點一樣

                LL a = y2 - y1;
                LL b = x1 - x2;
                LL c = a * x1 + b * y1;
                
                LL g = gcd(gcd(a,b),c);
                if(g!=0)
                {a /= g; b /= g; c /= g;}

                if(a<0 || (a==0 && b<0)) // 保持 pivot 是正數
                {
                    a=-a;
                    b=-b;
                    c=-c;
                }

                line.insert({a, b, c});
            }
        }

        cout << line.size() << endl;
    }

    return 0;
}
