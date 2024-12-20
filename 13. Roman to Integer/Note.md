# 13. Roman to Integer

[13. Roman to Integer](https://leetcode.com/problems/roman-to-integer/description)


![image](https://github.com/negionion/Leetcode/blob/ming/13.%20Roman%20to%20Integer/Note1.png)

## 思路

1. 直接用func.轉換編碼代表的數字
2. 只有當前一個編碼(prev)小於現在的編碼時，用減法調整編碼代表的數字
2. 如果前面的編碼(prev)都大於等於現在的編碼，直接加上目前編碼
