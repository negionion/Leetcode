# 80. Remove Duplicates from Sorted Array II

[80. Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description)


![image]()

## 思路

1. 用雙指標的做法inplace移動內容
2. 把超過2個的數字都換成INVAL(要被移除的數字)，讓要remove數字的指標可以快速判斷
