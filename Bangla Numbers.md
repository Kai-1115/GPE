原版寫法盲點:
如果很多0 不用寫出來 --> 用遞迴和大於的方式輸出
寬度4對齊 --> 用 setw(4)

```c++
string str;
int t = 1;
while (cin >> str)
{
    cout << t << ". ";
    t++;
    int len = str.length();
    vector<string> v = {"kuti", "lakh", "hajar", "shata"};

    int temp = len;
    while (temp)
    {
        if (temp % 7 == 1)
        {
            cout << str.substr(len - temp, 1);
            if (temp == 1)
            {
                cout << endl;
                break;
            }
            else
            {
                cout << " " << v[0] << " ";
                temp --;
            }
        }
        else if (temp % 7 == 2)
        {
            cout << str.substr(len - temp, 2);
            if (temp == 2)
            {
                cout << endl;
                break;
            }
            else
            {
                cout << " " << v[0] << " ";
                temp -= 2;
            }
        }
        else if (temp % 7 == 3)
        {
            cout << str.substr(len - temp, 1) << " ";
            cout << v[3] << " ";
            temp--;
        }
        else if (temp % 7 == 4)
        {
            cout << str.substr(len - temp, 1) << " ";
            cout << v[2] << " ";
            temp--;
        }
        else if (temp % 7 == 5)
        {
            cout << str.substr(len - temp, 2) << " ";
            cout << v[2] << " ";
            temp -= 2;
        }
        else if (temp % 7 == 6)
        {
            cout << str.substr(len - temp, 1) << " ";
            cout << v[1] << " ";
            temp--;
        }
        else if (temp % 7 == 0)
        {
            cout << str.substr(len - temp, 2) << " ";
            cout << v[1] << " ";
            temp -= 2;
        }
    }
}
```

