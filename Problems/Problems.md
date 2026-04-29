# 彰化高中 115 學年度 資訊學科能力競賽 校內初選

## **試場規則**

### **違規事項**

 - 行動裝置未置於教室外、教室前後、監考老師桌上、個人電腦主機上，經監考老師發現。
 - 於考試期間使用行動裝置。
 - 配戴具通訊功能的穿戴裝置。
 - 以任何方式使其他考生無法正常使用系統。
 - 考試期間與監考老師以外之人交談。

上述行為被發現，且屢勸不聽者，將登記於考生簽到表，並在賽後系統測試時將總成績 $\times 0.0001$ 並四捨五入至個位。

### **賽制**

 - 本次競賽採`OI`制度，有部分分，無罰時，並取每筆提交的子題聯集為總分。
   - 例如：某題共有兩筆提交，第一筆通過子測資 $\\{1,2\\}$ 、第二筆通過子測資 $\\{2,3\\}$ ，則總分為第 $\\{1,2,3\\}$ 筆子測資的分數相加。
 - 本次為封板賽，記分板將在比賽結束後公布。
 - 競賽結束後會做一次***System test***(系統測試)，所有成績以其為準。
 - 提交的冷卻時間(CD time)為 $15$ 秒，最後 $30$ 分鐘不在此限。
 - 對於每一題，使用者最多可以進行 $100$ 筆提交。

### **系統使用說明**

 - 系統連結: [http://192.168.81.242](http://192.168.81.242/)
 - 競賽將在 ***2026/04/29 1:10 P.M.*** 開始，使用者有十分鐘的時間閱讀試場規則，確認讀畢後請按下系統上的開始鈕，以免影響競賽時間。
 - 本次競賽時長共 ***120*** 分鐘。
 - 最晚進場時間 ***2026/04/29 1:40 P.M.***。
 - 最早離場時間 ***2026/04/29 2:10 P.M.***。
 - 總題本在第***A***題的題目敘述頁面中。
 - 使用者允許許使用 ***C/C++11/C++17*** 提交程式碼。
 - 若結果為***Execution timed out (wall clock limit exceeded)***，則表示系統因為某筆提交繁忙中，請檢查你的程式碼使否有可能超過執行時間，並稍後再試。
 - 對於每筆提交，請確認副檔名符合系統要求，詳見系統頁面。
 - 如有題目問題，請使用系統提供的訊息詢問功能提問。
 - 如有其他問題，如：上廁所、需要計算紙、系統使用問題等，請直接舉手向監考老師發問。

### **資源**

 - 賽後我們將會在一天內 **彰中資訊社群** 及 **HARC Discord** 中公告本次題解、總成績。
 - 競賽後將擇期在 ***HARC Discord*** 上進行直播題解。
 - 網址：
   - [彰中資訊社群](https://www.facebook.com/groups/chshcs/)
   - [本次專案](https://mysh212.github.io/CHSH-nhspc115-PRE/)
   - [HARC Discord](https://2120.page.link/HARC)
   - [彰中資訊社Discord](https://2120.page.link/cdc)

<div class = 'page' />

## **A. 疫情封鎖** ***<font color = '#AAAAAA'> Containment of the Plague </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

2077年，一種新的致命病毒株突變而生。

感染正在城市中擴散! 我們不能冒險讓感染蔓延整個城市!

這座城市可以被視為一條由 $n$ 個區域組成的線性街道，區域從 $1$ 編號到 $n$。每個區域目前的 **感染清除難度**  形成了一個 $1$ 到 $n$ 的排列，也就是每個數值恰好出現一次。

市長為了控制疫情擴散，可以進行一種緊急調度操作：在一次操作中，他可以選擇兩個不同的區域 $i$ 和 $j$，並交換它們的居民，以此交換他們的 **感染清除難度** 。

你的城市有一組感染清除小隊，會從最左邊的區域(編號 $1$) 的區域開始清除，並一路前往最右邊的區域(編號 $n$) 的區域。

不過由於經驗不足，他們必須由 **感染清除難度** 最低的城市開始累積經驗，以免自身也受到感染。

你的任務是計算，最少需要多少次這樣的交換操作，才能讓整個城市的感染程度變成非遞減序列（即 $a_1 \le a_2 \le \dots \le a_n$），使疫情呈現穩定可控的狀態。

### ***Input***

輸入包含多組測試資料。

第一行包含一個整數 $t$ ------ 測試資料的組數。

每組測試資料包含兩行：

第一行包含一個整數 $n$ ------ 區域數量。

第二行包含 $n$ 個整數 $a_1, a_2, \dots, a_n$。

### ***Output***

對於每組測試資料，輸出一個整數 ------ 將序列變為非遞減所需的最少交換次數。

<div class = page />

### ***Sample Input***

```
3
3
3 2 1
3
2 3 1
4
2 1 4 3
```

### ***Sample Output***

```
1
2
2
```

### ***Note***

 - $1 \le n \le 2 \times 10^5$
 - $1 \le a_i \le n$
 - 所有測試資料中 $n$ 的總和不超過 $2 \cdot 10^6$
 - 保證一定可以透過有限次交換操作使陣列變為非遞減


### ***Subtask***

 - ***subtask1***: $30\\%$ 所有測試資料中 $n$ 的總和不超過 $100$
 - ***subtask2***: $70\\%$  ***As statement***

<div class = 'page' />

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

<div class = 'page' />

## **C. 魔物獵人** ***<font color = '#AAAAAA'> Monster Hunter </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
頂尖獵人 **MelonHiker** 正在追蹤一隻傳說中的魔物——**波利剛 (Porygon)**。波利剛的身體構造非常特殊，在二維平面上可以被視為一個由 $N$ 個頂點組成的**簡單多邊形**（無自交、無破洞），且所有頂點座標皆為整數。

這場狩獵的勝負取決於以下規則：
1.  **魔物血量 ($HP$)**：波利剛的血量等同於該多邊形的**面積**。
2.  **獵人傷害 ($Damage$)**：**MelonHiker** 在平面上所有的**整數座標點** $(x, y)$ 都佈置了陷阱。當波利剛覆蓋到某個陷阱時，該陷阱會觸發並造成 $1$ 點傷害。
    * 若一個整數座標點位於多邊形的**內部**或**邊界上**，則視為被覆蓋。
3.  **成功判定**：若 **MelonHiker** 造成的總傷害大於或等於波利剛的血量（即 $Damage \ge HP$），則狩獵成功，輸出 `Yes`；否則輸出 `No`。

試判斷他是否能狩獵成功。

### ***Input***
$N$
$x_1$ $y_1$
$x_2$ $y_2$
$...$
$x_{N}$ $y_{N}$


### ***Output***
$Yes|No$

<div class = page />

### ***Sample Input***
```
3
0 0
1 1
2 0
```


### ***Sample Output***
```
Yes
```


### ***Note***
- $3 \le N \le 2 \times 10^5$
- $0 \le x_i, y_i \le 10^9$
- 保證給定的是簡單多邊形 (沒交叉，也沒破洞)
- 所有輸入皆為整數

### ***Subtask***

 - ***subtask1***: $20\\%$ $N, x_i, y_i\leq 1000$
 - ***subtask2***: $80\\%$ ***As statement***

<div class = 'page' />

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

<div class = 'page' />

## **E. 訊號差分編碼系統** ***<font color = '#AAAAAA'> Signal Delta Encoding System </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

隨著 AI 模型逐漸部署到邊緣裝置（edge devices），例如智慧攝影機、工業感測器與車載系統，如何在有限頻寬下傳輸高頻訊號成為一個重要問題。

彰化吃飯大學 資源工程學系最近正在設計一個新的訊號傳輸系統，在實際系統中，原始訊號通常不會直接傳輸，而是會經過一層稱為 Delta Encoding（差分編碼） 的處理：

即定義 Delta 值為:
$$
Delta(a) = \sum_{i=1}^N |a_i - a_{i-1}|
$$

這個值可以被視為訊號的「波動能量」，在許多 telemetry 系統中用來估計：

* 訊號穩定度
* 壓縮成本
* 傳輸需求
* 異常波動檢測
* 工程問題

在最新一代的 Edge Telemetry SDK 中，工程師需要進行大量的模擬測試（simulation profiling）。

系統會要求生成一段長度為 $N$ 的假訊號，用來測試不同 Delta 能量下的壓縮行為。

但由於硬體限制，訊號必須滿足以下約束：

每個 sample 必須是 8-bit unsigned 整數

$$
0\le a_i \le 255
$$

且整體訊號的 Delta 值必須精準控制為指定值 $K$

為了測試這個系統，請你撰寫一份符合條件的原始訊號進行測試。

### ***Input***

第一行輸入兩個正整數 $N$, $K$，代表要求的訊號長度以及要求的 Delta 值 $K$。

其中 $1 \le N \le 2\times 10^5,0 \le K \le 10^6$

### ***Output***

輸出 $N$ 個正整數，代表序列 $a$，即任意符合題目要求的原始訊號。

請注意 $a_i$ 必須是 8-bit unsigned int，即 $0\le a_i \le 255$。

可能存在多個符合要求的答案，輸出任意一種即可。

若不存在任意一組符合要求的答案，請輸出 $-1$

<div class = page />

### ***Sample Input 1***

```
4 20
```

### ***Sample Output 1***

```
1 5 12 3
```

### ***Sample Input 2***

```
1 10
```

### ***Sample Output 2***

```
-1
```

### ***Note***

 - $1 \le N \le 2\times 10^5$
 - $0 \le K \le 10^6$

### ***Subtask***

 - ***subtask1***: $20\\%$ $n \le 2000$
 - ***subtask2***: $80\\%$  ***As statement***

<div class = 'page' />

## **F. 肉圓難題** ***<font color = '#AAAAAA'> The Bawan Dilemma </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
眾所周知，彰化最大的特色就是大家都騎肉圓上學。
彰化高中有一個肉圓軌道系統，我們可以用一個 $N$ 個點的有根樹來形容這個系統，樹上的每個節點代表著一個中繼站或是終點站，而節點和節點之間的邊代表連接兩者的軌道。節點 $1$ 是這個有根樹的根節點，每個節點會有若干個子節點，如果一個節點沒有子節點，則稱它為一個終點站，否則稱它為一個中繼站。

每個中繼站必須選擇恰好一條連接它和子節點的軌道作為主要軌道，一顆肉圓會從根節點一路行駛主要軌道直到抵達某個終點站為止。一開始每個中繼站已經選擇了它們目前的主要軌道。

每個軌道可以用 $(u,v,w) 表示$，代表節點 $u$ 有子節點 $v$，它們之間的軌道上有 $w$ 顆貢丸。而對於第 $i$ 個站點來說，$m_i$ 代表其主要軌道的連接點。如果節點 $i$ 為終點站，則 $m_i=0$，否則節點 $i$ 為中繼站且它的主要軌道為節點 $(i,m_i)$ 之間的軌道。

彰化高中的貢丸倫理學家 Zhenzhe 提出了以下的 $K$-肉圓難題：現在每條軌道上各綁了若干顆貢丸，當肉圓行駛過一個軌道時，軌道上的貢丸會全部被吃掉。如果能改變最多 $K$ 個中繼站所選的主要軌道，該怎麼做比較好？
因為貢丸倫理道德實在是太複雜了，所以這裡我們考慮一個簡單的目標：最小化被吃掉的貢丸個數。
對於所有 $K=0,1,2,...,N-1$，請回答在 $K$-肉圓難題中，被吃掉的貢丸個數 $C_K$ 最少能是多少？

![圖片](https://hackmd.io/_uploads/Sknn8FR2-e.png)
註：圖片為 Gemini 生成

<div class = page />

### ***Input***
$N$
$u_1$ $v_1$ $w_1$
$u_2$ $v_2$ $w_2$
$...$
$u_{N-1}$ $v_{N-1}$ $w_{N-1}$
$m_1$ $m_2$ $...$ $m_N$


### ***Output***
$C_1$ 
$C_2$ 
$...$ 
$C_N$


### ***Sample Input***
```
8
1 2 3
2 3 2
2 4 9
3 5 1
1 6 49
6 7 8
3 8 5
6 4 8 0 0 7 0 0
```


### ***Sample Output***
```
57
12
10
6
6
6
6
6
```

<div class = page />

### ***Note***
- $2 \le N \le 2 \times 10^5$
- $1 \le u, v \le N$
- $u \neq v$
- $0 \le w \le 10^9$
- $0 \le m_i \le N$
- 保證輸入的所有軌道形成一個以節點 1 為根節點的有根樹
- 如果 $m_i = 0$，則節點 $i$ 一定是終點站
- 如果 $m_i > 0$，則節點 $i, m_i$ 之間的軌道一定存在
- 保證每個中繼點恰有一個主要軌道
- 可以用 $K$ 次不代表一定要剛好 $K$ 次，而是至多 $K$ 次

![圖片](https://hackmd.io/_uploads/By6WEY03-g.png)
- $K=0$：肉圓一定是經過節點 $1\rightarrow 6\rightarrow 7$。
- $K=1$：將中繼站 $1$ 的主要軌道換成和 $2$ 之間的軌道後，肉圓會經過節點 $1\rightarrow2\rightarrow4$。
- $K=2$：將中繼站 $1,2$ 的主要軌道都換成另一個軌道後，肉圓會經過節點 $1\rightarrow2\rightarrow3\rightarrow8$。
- $K\geq3$：將中繼站 $1,2,3$ 的主要軌道都換成另一個軌道後，肉圓會經過節點 $1\rightarrow2\rightarrow3\rightarrow5$。

### ***Subtask***

 - ***subtask1***: $30\\%$ $N\leq 500,w\leq 100$
 - ***subtask2***: $30\\%$ $N\leq 2500$
 - ***subtask3***: $40\\%$ ***As statement***