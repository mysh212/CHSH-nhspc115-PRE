## **B. 作業** ***<font color = '#AAAAAA'> Homework </font>***

`time limit` 1.5s
`memory limit` 256MB

### ***Statement***

***ysh*** 發現他有好多作業，因為太多了，所以他決定使用 **$+2$ 反轉牌** 把總共 $n$ 個作業加成給 ***Mingyee*** 寫。

但是實在因為太多了， ***Mingyee*** 也做不完，於是他決定採取 **儘量降低懲罰值總和** 的策略。

懲罰值的定義為:

假設一個作業被完成的時間點為 $l$ ，且 **該作業在時間點 $r$ 截止** ，則定義該懲罰值為 $max(0, l - r)$

***Mingyee*** 一次只會處裡一個作業，且在處理完一個作業之後會立刻開始處理另一個作業，因為他很強大，所以不需要休息。

你可以寫一個程式預測如果 ***Mingyee*** 採取最佳策略的話，最後最多可以按時繳交(在時限之前完成)作業嗎?

### ***Input***

$name_1$ $t_1$ $r_1$
$name_2$ $t_2$ $r_2$
...
$name_n$ $t_n$ $r_n$

其中 $name_i,\ 1 \leq i \leq n$ 為該項作業的名字，但並沒有甚麼用。
另外， $t_i,\ 1 \leq i \leq n$ 為 **完成該作業所需的時間** 。
而 $r_i,\ 1 \leq i \leq n$ 則是作業的截止期限。

<img src = https://memeprod.ap-south-1.linodeobjects.com/user-template/0ccc7cfc01eacce5277571fe5824095b.png height = 400px />

<div class = page />

### ***Output***

$Ans$

請輸出如果 ***Mingyee*** 合理安排時間的話，會獲得的最小懲罰值。

### ***Sample Input 1***

```
nhspc-preparation 20 17
web-homework 19 28
buy-something 2 1000
Teacher-Reminider 1 17
Operating-System 5 20
Watch-Video 40 20
Web-review 7 30
Kaggle-Report 48 7
Cyber-Report 3 95
Company 10000 86400
```

### ***Sample Output 1***

```
244
```

### ***Sample Input 2***

```
Nhspc preparation 20 17
Web homework 19 28
Buy something 2 1000
Teacher reminider 1 17
Watch video 40 20
Web review 7 30
Kaggle report 48 7
Cyber report 3 91
Company 10000 100
Codeforce Div1 12213 123
```

### ***Sample Output 2***

```
32491
```

<div class = page />

### ***Note***

 - $1 \leq n \leq 10$
 - $1 \leq t_i, r_i \leq 10 ^ 9,\ \forall\ 1 \leq i \leq n$
 - $name_i,\ \forall\ 1 \leq i \leq n$ 只會包含大小寫英文、數字、`-`、` `(空格) 。
 - $|name_i| \leq 100,\ \forall\ 1 \leq i \leq n$

### ***Subtask***

 - ***subtask1***: $17\\%$ $n = 1$, ($name_i$ 只會出現英文和 `-` $,\ \forall\ 1 \leq i \leq n$)
 - ***subtask2***: $13\\%$ $n \leq 2,\ t_i, r_i \leq 10 ^ 2$, ($name_i$ 只會出現英文和 `-` )$,\ \forall\ 1 \leq i \leq n$
 - ***subtask3***: $30\\%$ ($name_i$ 只會出現英文和 `-`) $,\ \forall\ 1 \leq i \leq n$
 - ***subtask4***: $10\\%$ $n \leq 2$
 - ***subtask5***: $10\\%$ $t_i, r_i \leq 10 ^ 4,\ \forall\ 1 \leq i \leq n$
 - ***subtask6***: $20\\%$ ***As statement***