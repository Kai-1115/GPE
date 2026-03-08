#include <iostream>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        if (n == 1)
        {
            cout << "0 0\n";
            continue;
        }

        int k = 2;
        while (1 + 3 * k * (k - 1) < n)
            k++;

        int x = k-1, y = 0;
        int diff = 1 + 3 * k * (k - 1) - n;

        int dx[6] = {0, -1, -1, 0, 1, 1};
        int dy[6] = {-1, 0, 1, 1, 0, -1};

        for (int i = 0; i < 6; ++i)
        {
            if (diff < k-1)
            {
                x += dx[i] * diff;
                y += dy[i] * diff;
                break;
            }
            else
            {
                diff -= (k - 1);
                // cout << "diff:" << diff << endl;
                // cout << "k:" << k << endl;
                x += dx[i] * (k - 1);
                y += dy[i] * (k - 1);
                // cout << x << " " << y << endl;
            }
        }
        cout << x << " " << y << endl;
    }

    return 0;
}