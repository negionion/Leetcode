# 169. Majority Element

[169. Majority Element](https://leetcode.com/problems/majority-element/description)


![image](https://github.com/negionion/Leetcode/blob/ming/169.%20Majority%20Element/Note1.png)

## 思路

1. Major的出現必須超過50%
2. 用抵銷跟平衡的概念，只要看到另一個數字不是自己，就把cnt-1，否則就持續累積cnt
3. 如果被抵銷完了(cnt=0)就用當下那個數字當基底再找看看
