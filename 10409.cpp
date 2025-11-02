// 10409: A mid-summer night’s dream
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// output: 最小可能值、輸入的值有幾個符合值、可以有幾個符合值

int main()
{
    int N;
    while(cin >> N)
    {
        vector <int> v;
        for(int i = 0;i < N;++i)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }

        sort(v.begin(),v.end());
        // for(int i = 0;i<v.size();++i)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        int len = v.size();

        if(len % 2 == 1) // odd -> min = mid, can = 1
        {
            int mid = v[(len-1)/2]; 
            int in = 0;
            for(int i = 0; i < len;++i)
            {
                if(v[i] == mid) in++;
            }
            cout << mid << " " << in << " " << 1 << endl;
        }
        else // even
        {
            int min = v[len/2-1];
            int max = v[len/2];
            // cout << "min is: " << min << " max is: " << max << endl;

            int in = 0;
            for(int i = 0; i < len;++i)
            {
                if(v[i] >= min && v[i] <= max) in++;
            }
            int can = max - min + 1;
            
            cout << min << " " << in << " " << can << endl;
        }
    }   
    return 0;
}