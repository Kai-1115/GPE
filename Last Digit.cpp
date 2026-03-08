#include <iostream>
#include <string>
#include <vector>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    while (cin >> str)
    {
        int len = str.length();
        if (len == 1 && str[0] == '0')
            break;

        int n;
        if (len == 1)
        {
            n = stoi(str.substr(0,1));
        }
        else
        {
            n = stoi(str.substr(len - 2, 2));
        }

        if (n == 0)
        {
            cout << "0\n";
            continue;
        }

        vector<int> v = {4, 1, 5, 2, 8, 3, 9, 2, 8, 7, 7, 8, 4, 7, 3, 8, 4, 1, 5, 4};
        // cout << v.size();

        int ans = 0;
        ans += (n - 1) / 20 * 4;
        ans += v[n % 20];
        ans %= 10;
        cout << ans << endl;
    }

    return 0;
}