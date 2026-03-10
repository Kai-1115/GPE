## 小括號和中括號的差別
```c++
vector<int> v(10); // 宣告一個vector, 裡面有10個int空間
vector<int> v[10]; // 宣告10個vector, 每個vector都可以存int
```
小括號: 一維陣列
中括號: 二維陣列

## 兩種寫法差別
```c++
vector<int> v[10]; // 每個vector長度可以不一樣
vector<vector<int>> v(10); // 一個10X10的二維陣列
```