#include <iostream>
#include <string>
#include <stack>
#include <vector>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    while(getline(cin,str))
    {
        int N = str[str.length()-1];
        vector<int> v(N);
        stack<int> s1;
        stack<char> s2;

        for(int i = 0; i < str.length();++i)
        {
            if(str[i] == '[')
            {
                if(str[i+2] == ']' ||str[i+3] == ']') // last element
                {
                    
                }
                else if(str[i+1] == '-') // 若接負
                {
                    s1.push((-1)*str[i+2]);
                    s2.push(str[i+3]);
                    i+=2;
                }
                else
                {
                    s1.push(str[i+1]);
                    s2.push(str[i+2]);
                    i++;
                }
            }
            else if(str[i] == ']')
            {

            }
            else if(str[i] == ' ')
            {
                break;
            }
        }
        
        for(int i = 0; i < N; ++i)
        {
            cout << v[i];
        }
        cout << endl;
    }
    
    

    return 0;
}
