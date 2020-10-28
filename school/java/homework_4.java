/*
filename:homework_4
function:switch

author:taeyeonssupdate
time:2020/10/26
*/

import java.lang.Math;
import java.util.Scanner;

public class homework_4 {
    public static void main(String[] args) {
        int money_off;
        Scanner sc = new Scanner(System.in);
        System.out.printf("請輸入金額：");
        int money = sc.nextInt();
        System.out.printf("請輸入身份：");
        switch (sc.nextLine()) {
            case "N":
                System.out.printf("應付金額%d元", money);
                break;
            case "B":
                money_off = Math.round((float)(money * 0.9));
                System.out.printf("應付金額%d元", money_off);
                break;
            case "A":
                money_off = Math.round((float) (money * 0.8));
                System.out.printf("應付金額%d元", money_off);
                break;
            default:
                System.out.println("輸入錯誤！請重新執行程式！");
        }
        sc.close();
    }
}