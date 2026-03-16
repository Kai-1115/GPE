```c++
#include <string>
```

## substr
```c++
string s = "hello";
cout << s.substr(1, 3) << endl; // 從index 1開始印3個字元 --> ell 
cout << s.substr(1) << endl; // 從index 1開始印到底 --> ello 
```

## getline
```c++
getline(cin, str);
```
`getline` 讀到換行符號 `\n` 才會停止
但是 `cin` 是讀完特定資料就會停下來
所以如果 `cin` 後面要接 `getline` 的話要 `cin.ignore();`

## stoi, stoll, stod, to_string
```c++
string str;
int n = stoi(str);
long long n = stoll(str);
double n = stod(str);

int n;
string str = to_string(n);
```