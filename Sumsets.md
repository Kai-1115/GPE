## IDEA
$C^n_3\times 線搜\ O(n)$ = $O(n^4)$ &rarr; too slow
Solution:
先算好兩兩之和：用 `map<int value, vector<pair<int,int>>>` &rarr; $O(n^2)$
用差值去找第三項：存的點降排，用兩兩點的差去`map`找看看 &rarr; $O(n^2)\times 線搜\ O(n) = O(n^3)$

## Debug
while 的 break 沒有跳完 &rarr; 在for的終止條件加上 !found
vector 要初始化大小 
