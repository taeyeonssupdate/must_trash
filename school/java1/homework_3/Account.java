/*
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