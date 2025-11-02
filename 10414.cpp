// 10414: Bangla Numbers

#include <iostream>

using namespace std;

int main()
{
    string str;
    int count = 1;
    while(getline(cin,str)&&!cin.eof())
    {
        cout << count << ". ";
        int l = str.length();
        
        // str[0] << str[1] << str[2] << str[3] << str[4] << str[5] << str[6] << str[7] << str[8]

        if(l<=2) cout << str;
        else if(l==3) cout << str[0] << " shata " << str[1] << str[2];
        else if(l==4) cout << str[0] << " hajar " << str[1] << " shata " << str[2] << str[3];
        else if(l==5) cout << str[0] << str[1] << " hajar " << str[2] << " shata " << str[3] << str[4];
        count++;
        cout << endl;
    }
    return 0;
}