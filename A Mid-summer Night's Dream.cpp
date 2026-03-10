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
    while (cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        sort(v.begin(), v.end());

        int a, b, min, sat = 0, pos;
        if (n % 2 == 0)
        {
            a = v[(n / 2) - 1];
            b = v[n / 2];
            min = a;
            for (int i = 0; i < n; ++i)
            {
                if (v[i] >= a && v[i] <= b)
                    sat++;
            }
            pos = b - a + 1;
        }
        else
        {
            min = v[(n-1)/2];
            for (int i = 0; i < n; ++i)
            {
                if (v[i] == min)
                    sat++;
            }
            pos = 1;
        }

        cout << min << " " << sat << " " << pos << endl;
    }

    return 0;
}