Two Buttons解题思路<br>
题目要求：n->m，*2 or -1<br>
1.当$m \leq n$时，最少步数为 $n-m$<br>
2.当$m \geq n$时，应<br>
* 当$m>n$时执行$m=[\frac{m+1}{2}]$并把计数器+1，如果$m$为奇数，由于要多执行一步$m=m-1$的操作，所以计数器要再+1。
* 当$m \leq n$时，执行同(1)的操作。