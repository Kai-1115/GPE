// 10418: Minesweeper
#include <iostream>
#define LL long long
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M, N;
    int count = 1;

    while(cin >> M >> N)
    {
        char arr[105][105];
        int num[105][105] = {0};
        
        if(M==0 && N ==0) break;

        for(int i = 0;i<M;++i)
        {
            for(int j = 0;j<N;++j)
            {
                cin >> arr[i][j];
            }
        }

        for(int i = 0;i<M;++i)
        {
            for(int j = 0;j<N;++j)
            {
                if(arr[i][j] == '*')
                {
                    // if(arr[i][j]!='*' && i >= 0 && j >= 0) num[i][j]++;
                    if(arr[i-1][j-1]!='*' && i-1 >= 0 && j-1 >= 0) num[i-1][j-1]++; // 左上
                    if(arr[i-1][j]!='*' && i-1 >= 0) num[i-1][j]++; // 上
                    if(arr[i-1][j+1]!='*' && i-1 >= 0 && j+1<= N) num[i-1][j+1]++; // 右上
                    if(arr[i][j-1]!='*' && j-1 >= 0) num[i][j-1]++; // 左
                    if(arr[i][j+1]!='*' && j+1<= N) num[i][j+1]++; // 右
                    if(arr[i+1][j-1]!='*' && j-1 >= 0 && i+1<=M) num[i+1][j-1]++; // 左下
                    if(arr[i+1][j]!='*' && i+1<=M) num[i+1][j]++; // 下
                    if(arr[i+1][j+1]!='*' && j+1<= N && i+1<=M) num[i+1][j+1]++; // 右下
                }
            }
        }

        cout << "Field #" << count << ":\n";
        for(int i = 0;i<M;++i)
        {
            for(int j = 0;j<N;++j)
            {
                if(arr[i][j] == '*') cout << "*";
                else cout << num[i][j];
            }
            cout << endl;
        }

        cout << endl;
        count++;
    }
    return 0;
}