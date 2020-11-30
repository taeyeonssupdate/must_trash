# IceCream 亂寫的 錯了就打死他 #<br>
## 僅供參考 ##<br>
資訊工程係  Java 程式設計  第六次作業<br>
班級：資工二乙 學號：B08170516   姓名：李知恩<br>

題目：組合計算：由ｎ個不同元素挑選ｍ個元素的方法數。<br>
說明：請依下列的遞迴定義來撰寫程式。<br>
    C(n, m) = C(n-1, m-1) + C(n-1, m)<br>
    C(n, n) = 1<br>
    C(n, 0) = 1<br>

---

## 流程圖 #

<!-- ```flow
start=>start: 開始
9=>operation: 輸入util內所有物件
13=>operation: 創建名為input的scanne
14=>operation: int m, m
15=>inputoutput: Please Enter N:
16=>operation: 取N值
17=>inputoutput: Please Enter M:
18=>operation: 取M值
19=>inputoutput: "C(%d,%d)=%d", n, m, C(n, m)
22=>operation: class C
23=>condition: C(n, n) = 1
24=>operation: 回傳1
25=>condition: C(n, 0) = 1
26=>operation: 回傳1
28=>operation: 回傳遞迴C(n-1, m-1) + C(n-1, m)
end=>end: 結束
start->9->13->14->15->16->17->18->22
22->23(no)->25(no)->28->22
23(yes)->24->19
25(yes)->26->19
19->end
``` -->

<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_6_flowchart.png?raw=true" width="600">

---

## 程式碼 ##

    /*
    filename:homework_6
    function:Recursion 

    author:IceCream
    time:2020/11/30
    */

    import java.util.*;

    public class homework_6 {
        public static void main(String[] args) {
            Scanner input = new Scanner(System.in);
            int n, m;
            System.out.printf("Please Enter N:");
            n = input.nextInt();
            System.out.printf("Please Enter M:");
            m = input.nextInt();
            System.out.printf("C(%d,%d)=%d", n, m, C(n, m));
        }

        public static int C(int n, int m) {
            if (n == m) {
                return 1; // C(n, n) = 1
            } else if (m == 0) {
                return 1; // C(n, 0) = 1
            }
            return C(n - 1, m - 1) + C(n - 1, m); //遞迴C(n-1, m-1) + C(n-1, m)
        }

    }