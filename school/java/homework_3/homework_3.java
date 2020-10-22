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