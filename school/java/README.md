# 我就爛 亂寫的 感覺就錯很多 #
資訊工程係  Java 程式設計  第三次作業  
班級：資工二乙 學號：B08170516   姓名：李知恩  

題目：輸入一位學生的學號、姓名、中文、英文及數學成績，並顯示輸入結果。 
説明： 
  1. 建立一個物件用以儲存上述資料。 
  2. 物件本身亦同時提供存取資料之方法。 

---

## 流程圖 #
<!-- ```flow
start=>start: 開始
h10=>operation: 此程式的package
h14=>inputoutput: 印出請依序輸入學號、姓名、中文、英文及數學成績：
h15=>operation: 建立類別為Account的物件user
h16=>inputoutput: 印出您輸入得值為：
h17=>operation: 印出當前值
h18=>operation: 執行change_value

a22=>operation: 掃描到number
a23=>operation: 掃描到name
a24=>operation: 掃描到中文
a25=>operation: 掃描到英文
a26=>operation: 掃描到數學

a31=>inputoutput: 印出請輸入哪個值想要改：
a33=>operation: switch (scan())
a34=>condition: case "number":
a35=>inputoutput: 印出請輸入值：
a36=>operation: number = scan();
a38=>condition: case "name":
a39=>inputoutput: 印出請輸入值：
a40=>operation: name = scan();
a42=>condition: case "中文":
a43=>inputoutput: 印出請輸入值：
a44=>operation: ch = scan();
a46=>condition: case "英文":
a47=>inputoutput: 印出請輸入值：
a48=>operation: en = scan();
a50=>condition: case "數學":
a51=>inputoutput: 印出請輸入值：
a52=>operation: ma = scan();
a54=>condition: default:
a55=>inputoutput: 印出錯誤請重新執行
a56=>operation: change_value


h19=>inputoutput: 印出更改過的值：
h20=>operation: 印出當前值
end=>end: 結束

start->h10->h14->h15->h16->h17->h18->h19->h20->end
h18->a31->a33->a34(no)->a38(no)->a42(no)->a46(no)->a50(no)->a54(yes)->a55->a56(right)->a33
a34(yes)->a35->a36->h19
a38(yes)->a39->a40->h19
a42(yes)->a43->a44->h19
a46(yes)->a47->a48->h19
a50(yes)->a51->a52->h19
``` -->
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_3_flowchart.png?raw=true" width="1200">

---

## 程式碼 ##
main.java

    /*
        filename:homework_3.java
        function:class
        package:homework_3

        author:taeyeonssupdate
        time:2020/10/19
    */

    package homework_3; //在homework_3資料夾內的package

    public class homework_3 {
        public static void main(String[] args) {
            System.out.println("請依序輸入學號、姓名、中文、英文及數學成績");
            Account user = new Account(); //建立類別為Account的物件user
            System.out.println("您輸入得值為：");
            System.out.printf("number: %s\nname: %s\n中文: %s\n英文: %s\n數學: %s\n", user.number, user.name, user.ch, user.en, user.ma);
            user.change_value(); //更改數值
            System.out.println("更改過的值：");
            System.out.printf("number: %s\nname: %s\n中文: %s\n英文: %s\n數學: %s\n", user.number, user.name, user.ch, user.en, user.ma);
        }
    }

Account.java

    /*s
        filename:Account.java
        function:Account class
        package:homework_3

        author:taeyeonssupdate
        time:2020/10/19
    */

    package homework_3; //在homework_3資料夾內的package

    import java.util.Scanner; //載入Scanner類別

    public class Account {
        // 宣告變數
        String number, name, ch, en, ma; // 學號、姓名、中文、英文、數學
        Scanner sc = new Scanner(System.in); //建立一個scanner命名為sc

        // 初始化值
        public Account() {
            // 用sc輸入變數到各個值
            number = sc.nextLine();
            name = sc.nextLine();
            ch = sc.nextLine();
            en = sc.nextLine();
            ma = sc.nextLine();
        }

        // 更改數值
        public void change_value() {
            System.out.println("請輸入哪個值想要改：");
            // 輸入想要更改得值 給switch 對應到case並用scanner更改指定的值
            switch (sc.nextLine()) {
                case "number":
                    System.out.printf("請輸入值：");
                    number = sc.nextLine();
                    return;
                case "name":
                    System.out.printf("請輸入值：");
                    name = sc.nextLine();
                    return;
                case "中文":
                    System.out.printf("請輸入值：");
                    ch = sc.nextLine();
                    return;
                case "英文":
                    System.out.printf("請輸入值：");
                    en = sc.nextLine();
                    return;
                case "數學":
                    System.out.printf("請輸入值：");
                    ma = sc.nextLine();
                    return;
                default:
                    System.out.println("錯誤請重新執行");
                    change_value();
                    return;
            }
        }
    }

---
---
---
---

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
15=>operation: 創建一個scanner
16=>inputoutput: 要求使用者輸入X(第一個數字)
17=>operation: 接收使用者輸入下一個整數到X
18=>inputoutput: 要求使用者輸入Y(第二個數字)
19=>operation: 接收使用者輸入下一個整數到Y
20=>inputoutput: 輸出X和Y
21=>inputoutput: 印出"輸出結果為："
22=>inputoutput: 輸出加法結果
23=>inputoutput: 輸出剪法結果
24=>inputoutput: 輸出成法結果
25=>inputoutput: 輸出除法結果(包含餘數)
end=>end: 結束
start->9->15->16->17->18->19->20->21->22->23->24->25->end
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
            System.out.printf("%d/%d=%d...%d\n", x, y, x / y, x % y);
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
            System.out.println("1.資訊工程系"); //印出班級名稱
            System.out.println("2.B08170XXX"); //印出學號
            System.out.println("3.XXX"); //印出姓名
            System.out.println("4.0800096000"); //印出電話
            System.out.println("5.id@gmail.com"); //印出e-mail
        }
    }
