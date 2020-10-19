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