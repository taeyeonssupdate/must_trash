# 我就爛 亂寫的 感覺就錯很多 #<br>
## 僅供參考 ##<br>
資訊工程係  Java 程式設計  第五次作業<br>
班級：資工二乙 學號：B08170516   姓名：李知恩<br>

題目：請以三層迴圈方式製作一個九宮格式九九乘法表。<br>
說明：執行結果如下所示：<br>

1＊1= 1 2＊1= 2 3＊1= 3<br>
1＊2= 2 2＊2= 4 3＊2= 6<br>
1＊3= 3 2＊3= 6 3＊3= 9<br>
1＊4= 4 2＊4= 8 3＊4= 12<br>
1＊5= 5 2＊5= 10 3＊5= 15<br>
1＊6= 6 2＊6= 12 3＊6= 18<br>
1＊7= 7 2＊7= 14 3＊7= 21<br>
1＊8= 8 2＊8= 16 3＊8= 24<br>
1＊9= 9 2＊9= 18 3＊9= 27<br>

4＊1= 4 5＊1= 5 6＊1= 6<br>
4＊2= 8 5＊2= 10 6＊2= 12<br>
4＊3= 12 5＊3= 15 6＊3= 18<br>
4＊4= 16 5＊4= 20 6＊4= 24<br>
4＊5= 20 5＊5= 25 6＊5= 30<br>
4＊6= 24 5＊6= 30 6＊6= 36<br>
4＊7= 28 5＊7= 35 6＊7= 42<br>
4＊8= 32 5＊8= 40 6＊8= 48<br>
4＊9= 36 5＊9= 45 6＊9= 54<br>

7＊1= 7 8＊1= 8 9＊1= 9<br>
7＊2= 14 8＊2= 16 9＊2= 18<br>
7＊3= 21 8＊3= 24 9＊3= 27<br>
7＊4= 28 8＊4= 32 9＊4= 36<br>
7＊5= 35 8＊5= 40 9＊5= 45<br>
7＊6= 42 8＊6= 48 9＊6= 54<br>
7＊7= 49 8＊7= 56 9＊7= 63<br>
7＊8= 56 8＊8= 64 9＊8= 72<br>
7＊9= 63 8＊9= 72 9＊9= 81<br>

---

## 流程圖 #

<!-- ```flow
start=>start: 開始
11=>operation: int x y z
12=>condition: 123 456 789 三個三個跳
13=>condition: 1~9
14=>condition: loop 3次 x的三次
15=>inputoutput: "%d*%d= %d "
17=>inputoutput: 換行
19=>inputoutput: 換行
end=>end: 結束

start->11->12(yes)->13(yes)->14(yes)->15->end
14(no)->17->13
13(no)->19->12
``` -->

<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_5_flowchart.png?raw=true" width="600">

---

## 程式碼 ##

```java
    /*
    filename:homework_5
    function:while 

    author:taeyeonssupdate
    time:2020/11/16
    */

    public class homework_5 {
        public static void main(String[] args) {
            int x, y, z; //loop count
            for (x = 1; x < 9; x += 3) { //123 456 789 三個三個跳
                for (y = 1; y < 10; y++) { //1~9
                    for (z = 0; z < 3; z++) { //loop 3次 x的三次
                        System.out.printf("%d*%d= %d ", x + z, y, (x + z) * y);
                    }
                    System.out.println();
                }
                System.out.println();
            }
        }
    }
```