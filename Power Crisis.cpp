#include <iostream>
#define LL long long
using namespace std;

int josephus(int n, int m)
{
    if(n==1)
        return 0;
    else
        return (josephus(n-1, m)+m)%n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; // N people
    while(cin >> N && N != 0)
    {
        for(int M = 1;; ++M)
        {
            if(josephus(N-1, M)==11)
            {
                cout << M << endl;
                break;
            }
        }
    }   
    
    return 0;
}