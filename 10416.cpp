// 10416: Last Digit
#include <iostream>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s[0]=='0') break;

        int l = s.length();
        int x;
        if(l<2) x = stoi(s);
        else x = stoi(s.substr(l-2, 2));

        int sum = 0;
        sum += (x/20)*4;
        x%=20;

        if(x>=1) sum += 1;
        if(x>=2) sum += 4;
        if(x>=3) sum += 7;
        if(x>=4) sum += 6;
        if(x>=5) sum += 5;
        if(x>=6) sum += 6;
        if(x>=7) sum += 3;
        if(x>=8) sum += 6;
        if(x>=9) sum += 9;
        if(x>=11) sum += 1;
        if(x>=12) sum += 6;
        if(x>=13) sum += 3;
        if(x>=14) sum += 6;
        if(x>=15) sum += 5;
        if(x>=16) sum += 6;
        if(x>=17) sum += 7;
        if(x>=18) sum += 4;
        if(x>=19) sum += 9;
        cout << sum%10 << endl;
    }
    return 0;
}