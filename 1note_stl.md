## Structure
LL
Stack
Queue
Priority Queue
Vector
Set
Pair
Tuple
Map


## Priority Queue
每次都可以拿到最大(default) 或最小的元素
### Declare
```c++
#include <queue>
priority_queue<int> pq; // 預設大到小 
priority_queue<int, vector<int>, greater<int>> pq; // 小到大
```

### 拿極值
```c++
pq.top(); // 最大或最小
```

## Vector
### Declare
```c++
#include <vector>
vector<int>, vector<double>, vector<string> 
vector<int> v; // 空vector
vector<int> v(5); // 5個0的vector 
vector<int> v(5,10); //5個10的vector
vector<int> v{1,2,3}; //初始化vector
```

### Functions
```c++
v.push_back();
v.pop_back();
v.size();
v.empty();
v.clear();
```

### Index
```c++
v[0]; // 不會 boarder check
v.at(0); // 會 boarder check
v.front(); // 拿第一個
v.back(); // 拿最後一個
```

### Capacity
```c++
v.capacity(); // 查看目前大小
v.reserve(); // 預留空間
v.resize(); // 改空間
```

### I/O
```c++
v.insert(v.begin()+M,N); // 在第M插入N
v.erase(v.begin()+N); // 刪第N
v.erase(v.begin()+M,v.begin()+N); // 刪M到N
```

### Algo 
```c++
#include <algorithm>
sort(v.begin(), v.end()); // 排小到大
sort(v.begin(), v.end(), std::greater<int>()); // 排大到小
```

## Sets
- 自動排序
- 不允許重複
- 底層是RBT

### Declare
```c++
set<int> s; // 空set
set<int> s = {1,2,3}; // 初始化 
```

### Iterator 
Set只能iterator, 不能index
```c++
for(auto it = s.begin(); it = s.end(); it++)
{
    it 就是內部元素
}
```
or
```c++
for(auto it:s)
{
    it 就是內部元素
}
```

### Find
```c++
if(s.find(5) != s.end()) // find回傳的是iterator
{
    found
}
```

### Functions
```c++
s.empty();
s.size();
auto it = s.upper_bound(5); // 小於等於5的值中最大的
auto it = s.lower_bound(5); // 大於等於5的值中最大的
```

### I/O
```c++
s.insert(N); // 插入N
s.erase(N); // 刪N
s.erase(s.lower_bound(M), s.upper_bound(N)); // 刪M到N
```

### 去重 (vector --> set)
```c++
vector<int> v = {1,1,2,3,3,4};
set<int> s(v.begin(), v.end());
```

### 大到小排序
```c++
set<int, greater<int>> s;
```

### P.S. 
- multiset: 可以有重複元素 `#include<multiset>`
- unorder_set: 沒排序

## Pair
### Declare
```c++
#include <utility>
pair<int,int> p = {3,5};
pair<int, int> p(3,5);
auto p = make_pair(3,5);
```

### Index
```c++
p.first // 第一個元素的值
p.second // 第二個元素的值
```

### Pair Compare
先比first，一樣的話比second

### Pair + Vector
```c++
vector<pair<int,int>> v;
v.push_back({1,2}); // insert
sort(v.begin(),v.end()); // sort
```

### Pair + Map, Pair + Set
Skipped!

## Tuple
### Declare
```c++
#include <tuple>
tuple<int,string,double> t;
tuple<int, string, double> t1(1, "hello", 3.14); // 空 tuple
tuple<int, string, double> t1(1, "hello", 3.14); // make_tuple
```

### Index
```c++
get<0>(t); // t的第0個
get<1>(t); // t的第1個
```

### Tie + Ignore
```c++
tie(a, ignore, b) = t; // tie是解包，ignore是不要那個值
```

## Map
key/value 的對應關係

```c++
// Declare
#include <map>
map<string, int> mp;
map<string, int> mp = {{1, 10}, {2, 20}}; // 像Python的dict

mp.size();
mp.empty();

// 取 value
mp[key]
mp.at(key);

// I/O
mp.insert({"John", 5});
mp.emplace({"John", 5});
mp.erase(key);
mp.clear();

// 確認key在不在
mp.count(key); // 回傳0或1
mp.find(key); // 回傳pointer
```



