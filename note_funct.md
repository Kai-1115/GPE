## getline 
```c++
#include <string>
getline(cin, str);
```
`getline` 讀到換行符號 `\n` 才會停止
但是 `cin` 是讀完特定資料就會停下來
所以如果 `cin` 後面要接 `getline` 的話要 `cin.ignore();`


## stringstream
```c++
#include <sstream>
stringstream ss(s);
while(ss >> x) // 一次拿一個出來
while(ss >> x >> y) // 一次拿兩個出來
```

## Auto + Pointer 
```c++
auto &p; // Pointer 可以改值
auto p; // 從原本那裡copy一份資料，不能改值
```

## reverse string
```c++
#include <algorithm>
str.reverse(str.begin(),str.end());
```

## substr
```c++
#include <string>
string s = "hello";
cout << s.substr(1,3) << endl; // 從index 1開始印3個字元 --> ell 
cout << s.substr(1) << endl; // 從index 1開始印到底 --> ello 
```

## round
```c++
#include <cmath>
cout << round(3.321); // 四捨五入為3
cout << round(3.321 * 100) / 100 // 可以保留兩位小數
```

## setprecision
```c++
#include <iomanip>
cout << setpresision(2) << x; // 保留2位小數
```

## stoi, stoll, stod, to_string
```c++
#include <string>
string str;
int n = stoi(str);
long long n = stoll(str);
double n = stod(str);

int n;
string str = to_string(n);
```

## setw
```c++
#include <iomanip>
cout << setw(4) << sth; // 用寬度4輸出
```