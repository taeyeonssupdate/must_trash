# 我就爛 練寫的 感覺就錯很多 #
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
10=>operation: 此程式的package
12=>operation: 引用Account類別
16=>inputoutput: "請依序輸入學號、姓名、中文、英文及數學成績"
17=>operation: 使用user變數為account類別
18=>inputoutput: "您輸入得值為："
19=>operation: 印出當前值
20=>inputoutput: "請輸入哪個值想要改："
21=>condition: switch (user.scan())
22=>condition: case "number":
23=>inputoutput: "請輸入值："
24=>operation: user.number = user.scan();
26=>condition: case "name":
27=>inputoutput: "請輸入值："
28=>operation: user.name = user.scan();
30=>condition: case "中文":
31=>inputoutput: "請輸入值："
32=>operation: user.ch = user.scan();
34=>condition: case "英文":
35=>inputoutput: "請輸入值："
36=>operation: user.en = user.scan();
38=>condition: case "數學":
39=>inputoutput: "請輸入值："
40=>operation: user.ma = user.scan();
42=>condition: default:
43=>inputoutput: "錯誤請重新執行"
45=>inputoutput: "更改過的值："
46=>operation: user.print_out();
end=>end: 結束

start->10->12->16->17->18->19->20->21(yes)
21(yes)->22(no)->26(no)->30(no)->34(no)->38(no)
22(yes)->23->24->45
26(yes)->27->28->45
30(yes)->31->32->45
34(yes)->35->36->45
38(yes)->39->40->45
45->46->end
``` -->
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_3_flowchart.png?raw=true" width="600">

---

## 程式碼 ##

main.java

    /*
        filename:main.java
        function:class
        package:homework_3

        author:taeyeonssupdate
        time:2020/10/19
    */

    package homework_3;

    import homework_3.Account;

    public class main {
        public static void main(String[] args) {
            System.out.println("請依序輸入學號、姓名、中文、英文及數學成績");
            Account user = new Account();
            System.out.println("您輸入得值為：");
            user.print_out();
            System.out.println("請輸入哪個值想要改：");
            switch (user.scan()) {
                case "number":
                    System.out.printf("請輸入值：");
                    user.number = user.scan();
                    break;
                case "name":
                    System.out.printf("請輸入值：");
                    user.name = user.scan();
                    break;
                case "中文":
                    System.out.printf("請輸入值：");
                    user.ch = user.scan();
                    break;
                case "英文":
                    System.out.printf("請輸入值：");
                    user.en = user.scan();
                    break;
                case "數學":
                    System.out.printf("請輸入值：");
                    user.ma = user.scan();
                    break;
                default:
                    System.out.println("錯誤請重新執行");
            }
            System.out.println("更改過的值：");
            user.print_out();
        }
    }
Account.java

    /*
        filename:Account.java
        function:Account class
        package:homework_3

        author:taeyeonssupdate
        time:2020/10/19
    */

    package homework_3;

    import java.util.Scanner;

    public class Account {
        String number, name, ch, en, ma;
        Scanner sc = new Scanner(System.in);

        public Account() {
            number = scan();
            name = scan();
            ch = scan();
            en = scan();
            ma = scan();
        }

        public String scan() {
            return sc.nextLine();
        }

        public void print_out() {
            System.out.printf("%s\n%s\n%s\n%s\n%s\n", number, name, ch, en, ma);
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
