#include <iostream>
#include <string>
#include <algorithm>
#define LL long long
using namespace std;

string next(string str)
{
    int h = stoi(str.substr(0, 2));
    int m = stoi(str.substr(3, 2));
    m++;
    if (m == 60)
    {
        h++;
        if (h == 24)
        {
            h = 0;
        }
        m = 0;
    }
    if (h < 10)
    {
        str[0] = '0';
        str[1] = h + '0';
    }
    else
    {
        str[0] = h / 10 + '0';
        str[1] = h % 10 + '0';
    }
    if (m < 10)
    {
        str[3] = '0';
        str[4] = m + '0';
    }
    else
    {
        str[3] = m / 10 + '0';
        str[4] = m % 10 + '0';
    }
    return str;
}

bool is_pan(string str)
{
    int temp = stoi(str.substr(0,2) + str.substr(3,2));
    string t = to_string(temp);
    string t2 = t;
    reverse(t2.begin(), t2.end());
    if(t == t2) return true;
    else return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;

        while (true)
        {
            str = next(str);
            if (is_pan(str))
            {
                cout << str << endl;
                break;
            }
        }
    }

    return 0;
}