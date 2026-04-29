## **D. 上學** ***<font color = '#AAAAAA'> School </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

又是天氣晴朗的一天。

屋內， ***ysh*** 坐在沙發上，看著窗外的天氣，正思考著要去哪裡。

門微掩，卻不至讓暑意大肆佔據房間。

又是平靜的一天。

靜得舒服，卻也靜得可怕。

而日子往往都使這樣，我們總期待明天會發生什麼，但真正到來之時，卻也非如想像中精彩。

*「過好今天」*

***ysh*** 在心中暗暗決定；緩緩拿出地圖(?) ，上面畫著好多各種聽來，卻還來不及去的景點。

轉頭看去，窗外的雲厚了，彷彿讀懂了心思。

*「是時候開始一段 -- 真正屬於自己 -- 新的旅程了」*

---

***ysh*** 在苦思冥想過後，決定 **依序** 前往 $n$ 個景點，每個景點的座標位於 $(x_i, y_i),\ \forall\ 1 \leq i \leq n$ ，且 ***ysh*** 的小房子（起點）位在座標 $(0, 0)$ 。

<div class = page />

### ***Input***

$n$
$x_1$ $y_1$
$x_2$ $y_2$
...
$x_n$ $y_n$

### ***Output***

$Ans$

請輸出 ***ysh*** 從起點造訪完所有景點 $(x_i, y_i),\ \forall\ 1 \leq i \leq n$ 並回到起點後所走的距離總和。

其中對於任兩點 $(a, b), (x, y)$ ，距離訂為 $|a - x| + |b - y|$ 。

### ***Sample Input***

```
10
9 -10
5 10
9 1
2 0
-8 -8
1 6
4 -4
1 0
3 -8
4 2
```

### ***Sample Output***

```
152
```

### ***Note***

 - $1 \leq n \leq 2 \times 10 ^ 5$
 - $-10 ^ {9} \leq x_i, y_i \leq 10 ^ 9,\ \forall\ 1 \leq i \leq n$

### ***Subtask***

 - ***subtask1***: $1\\%$ $n \leq 100, (|x_i|, |y_i| \leq 100,\ \forall\ 1 \leq i \leq n)$
 - ***subtask2***: $9\\%$ $n \leq 10 ^ 3, (|x_i|, |y_i| \leq 10 ^ 4,\ \forall\ 1 \leq i \leq n)$
 - ***subtask3***: $20\\%$ $n \leq 10 ^ 5, (|x_i|, |y_i| \leq 10 ^ 4,\ \forall\ 1 \leq i \leq n)$
 - ***subtask4***: $30\\%$ $|x_i|, |y_i| \leq 10 ^ 7,\ \forall\ 1 \leq i \leq n$
 - ***subtask5***: $40\\%$ ***As statement***