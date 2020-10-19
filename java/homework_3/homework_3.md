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
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_3_flowchart.png?raw=true" width="1200">

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