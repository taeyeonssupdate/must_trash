# 我就爛 亂寫的 感覺就錯很多 #<br>
## 僅供參考 ##<br>
資訊工程係  Java 程式設計  第六次作業<br>
班級：資工二乙 學號：B08170516   姓名：李知恩<br>

題目：大數運算之加法運算<br>
說明：<br>
  1. 輸入二個正整數，輸出此二數相加之結果。<br>
  2. 此二個正整數之位數由1位至20位。<br>

---

## 流程圖 #

<!-- ```flow
start=>start: 開始
13=>operation: 創建sc(scanner)
14=>inputoutput: Please input x:
15=>operation: 掃描數入變數套用$20s格式後空白轉乘0到x
16=>inputoutput: Please input y: 
17=>operation: 掃描數入變數套用$20s格式後空白轉乘0到y
18=>operation: String answer = ""
19=>operation: int w = 0
20=>condition: for (int i = x.length() - 1; i >= 0; i--) {
21=>operation: int c = y.charAt(i) + x.charAt(i) - 96 + w;
22=>operation: w = c / 10
23=>operation: answer = (c % 10) + answer;
25=>operation: answer = w + answer;
26=>inputoutput: answer.replaceFirst("^0+(?!$)", "")
end=>end: 結束
start->13->14->15->16->17->18->19->20(no)->25->26->end
20(yes)->21->22->25
``` -->

<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_7_flowchart.png?raw=true" width="600">

---

## 程式碼 ##

```java
/*
filename:homework_7
function:Big number

author:taeyeonssudpate
time:2020/12/14
*/

import java.util.Scanner;

public class homework_7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Please input x: ");
        String x = String.format("%20s", sc.next()).replace(" ", "0");
        System.out.printf("Please input y: ");
        String y = String.format("%20s", sc.next()).replace(" ", "0");
        sc.close();
        String answer = "";
        int w = 0;
        for (int i = x.length() - 1; i >= 0; i--) {
            int c = y.charAt(i) + x.charAt(i) - 96 + w;
            w = c / 10;
            answer = (c % 10) + answer;
        }
        answer = w + answer;
        System.out.println(answer.replaceFirst("^0+(?!$)", ""));
    }
}
```