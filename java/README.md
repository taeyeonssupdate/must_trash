# 僅供參考 #
資訊工程係  Java 程式設計  第二次作業  
班級：資工二乙 學號：B08170516   姓名：李知恩  

題目：計算總和、乘積、差、商和餘數  
說明：撰寫一個程式，要求使用者輸入兩個整數，然後印出這兩個數字的總和、乘積、差、商、和餘數。  
範例：  
輸入二個為7, 3  
輸出結果為：  
7+3=10  
7*3=21  
7-3=4  
7/3=2...1  

---

## 流程圖 #
<!-- ```flow
start=>start: 開始
9=>operation: 引用Scanner類別
10=>operation: 引用Math類別
15=>operation: 創建一個scanner
17=>inputoutput: 要求使用者輸入X(第一個數字)
18=>inputoutput: 接收使用者輸入下一個整數到X
19=>inputoutput: 要求使用者輸入Y(第二個數字)
20=>inputoutput: 接收使用者輸入下一個整數到Y
21=>inputoutput: 輸出X和Y
22=>inputoutput: 印出"輸出結果為："
23=>inputoutput: 輸出加法結果
24=>inputoutput: 輸出剪法結果
25=>inputoutput: 輸出成法結果
26=>inputoutput: 輸出除法結果(包含餘數)
end=>end: 結束
start->9->10->15->17->18->19->20->21->22->23->24->25->26->end
``` -->
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_2_flowchart.png?raw=true" width="190">

---

## 程式碼 ##

    /*
        filename:homework_2
        function:input +*-/

        author:taeyeonssupdate
        time:2020/10/05
    */
    import java.util.Scanner;
    import java.lang.Math;

    public class homework_2 {
        public static void main(String[] args) {
            int x, y;
            Scanner scanner = new Scanner(System.in);

            System.out.printf("Please input x: ");
            x = scanner.nextInt();
            System.out.printf("Please input y: ");
            y = scanner.nextInt();
            System.out.printf("輸入二個為%d,%d\n", x, y);
            System.out.println("輸出結果為：");
            System.out.printf("%d+%d=%d\n", x, y, x + y);
            System.out.printf("%d-%d=%d\n", x, y, x - y);
            System.out.printf("%d*%d=%d\n", x, y, x * y);
            System.out.printf("%d/%d=%d...%d\n", x, y, Math.round((float) x / (float) y), Math.round((float) x % (float) y));
        }
    }



---
---
---
---

# 僅供參考 #
資訊工程係  Java 程式設計  第一次作業  
班級：資工二乙 學號：B08170516   姓名：李知恩  

題目：撰寫一個程式,依序分行列印下列訊息.  
說明：依序分行列印下列訊息  
1. 班級名稱
2. 學號
3. 姓名
4. 行動電話
5. e-mail

若因個人資料因素,第4, 5項可列印自行編撰之資料.  
惟其仍須符合其應有之標準格式.  

---

## 流程圖 ##
<!-- ```flow
start=>start: 開始
out1=>inputoutput: 班級名稱
out2=>inputoutput: 學號
out3=>inputoutput: 姓名
out4=>inputoutput: 行動電話
out5=>inputoutput: e-mail
end=>end: 結束
start->out1->out2->out3->out4->out5->end
``` -->
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_1_flowchart.png?raw=true" width="190">

---

## 程式碼 ##

    /*
        filename:homework_1
        function:print some text

        author:taeyeonssupdate
        time:2020/10/04
    */
    public class homework_1 {
        public static void main(String[] args) {
            System.out.println("資訊工程系");
            System.out.println("B0817XXXX");
            System.out.println("XXX");
            System.out.println("09XXXXXXXX");
            System.out.println("XXX@gmail.com");
        }
    }
