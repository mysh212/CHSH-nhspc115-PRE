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