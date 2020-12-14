# 我就爛 亂寫的 感覺就錯很多 #<br>
## 僅供參考 ##<br>
資訊工程係  Java 程式設計  第四次作業<br>
班級：資工二乙 學號：B08170516   姓名：李知恩<br>

題目：依客戶之會員身份計算應付金額。<br>
說明：<br>
1. 輸入客戶之購買金額。<br>
2. 輸入客戶之會員身份，以下為會員身份類別：<br>
    ‘N’：非會員<br>
    ‘B’：一般會員<br>
    ‘A’：金卡會員<br>
3. 非會員不打折，一般會員打九折，金卡會員打八折。<br>
4. 小數部份採四捨五入計。<br>

---

## 流程圖 #

<!-- ```flow
start=>start: 開始
9=>operation: 輸入Math;
10=>operation: 輸入Scanner;
14=>operation: int 打折的價錢;
15=>operation: 創建一個Scanner為sc
16=>inputoutput: 請輸入金額：
17=>operation: scan money
18=>inputoutput: 請輸入身份：
19=>operation: switch (sc.輸入) 
20=>condition: case "N":
21=>operation: money_off = 原價
22=>operation: break;
23=>condition: case "B":
24=>operation: money_off = 打折九折;
25=>operation: break;
26=>condition: case "A":
27=>operation: money_off = 打折八折;
28=>operation: break;
29=>condition: default:
30=>inputoutput: 輸入錯誤！請重新執行程式！
32=>inputoutput: 應付金額%d元
34=>operation: sc釋放記憶體;
end=>end: 結束
start->9->10->14->15->16->17->18->19->20(no)->23(no)->26(no)->29(yes)->30->end
20(yes)->21->22->end
23(yes)->24->25->end
26(yes)->27->28->end
``` -->
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_4_flowchart.png?raw=true" width="1200">

---

## 程式碼 ##

```java
/*
filename:homework_4
function:switch

author:taeyeonssupdate
time:2020/10/26
*/

import java.lang.Math;
import java.util.Scanner;

public class homework_4 {
    public static void main(String[] args) {
        int money_off = 0;
        Scanner sc = new Scanner(System.in);
        System.out.printf("請輸入金額：");
        int money = sc.nextInt();
        System.out.printf("請輸入身份：");
        switch (sc.next()) {
            case "N":
                money_off = money;
                break;
            case "B":
                money_off = Math.round((float) (money * 0.9));
                break;
            case "A":
                money_off = Math.round((float) (money * 0.8));
                break;
            default:
                System.out.println("輸入錯誤！請重新執行程式！");
            }
        System.out.printf("應付金額%d元", money_off);
        sc.close();
    }
}
```