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
h10=>operation: 輸入homework_3包
h12=>operation: 輸入scanner
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

start->h10->h12->h14->h15->h16->h17->h18->h19->h20->end
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
homework_3.java

    /*
        filename:homework_3.java
        function:call class
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