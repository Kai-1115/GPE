#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n;
    while (cin >> n && n)
    {
        vector<double> v(n);
        double sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];
            // cout << "sum: " << sum << endl;
        }
        double ave = sum / n;
        
        double ans = 0;
        for(int i = 0;i<n;++i)
        {
            ans += abs(v[i] - ave);
        }

        cout << "$" << fixed << setprecision(2) << ans/2 << endl;
    }

    return 0;
}