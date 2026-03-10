#include <iostream>
using namespace std;

int main()
{
    string str;
    int t = 1;
    while (cin >> str)
    {
        cout << "Case " << t << ":\n";
        t++;
        int n;
        cin >> n;
        int a, b;
        for (int i = 0; i < n; ++i)
        {
            cin >> a >> b;
            if (a > b)
                swap(a, b);
            bool flag = true;
            for (int j = a; j < b; ++j)
            {
                if (str[j] != str[j + 1])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}