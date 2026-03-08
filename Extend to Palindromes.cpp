#include <iostream>
#include <string>
#include <algorithm>
#define LL long long
using namespace std;

bool is_pan(string str)
{
    string temp = str;
    reverse(temp.begin(), temp.end());
    if (temp == str)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    while (cin >> str)
    {
        int i = 0;
        for (i; i < str.length(); ++i)
        {
            if(is_pan(str.substr(i)))
            {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << str << temp.substr(str.length()-i) << endl;
                break;
            }
        }
    }

    return 0;
}