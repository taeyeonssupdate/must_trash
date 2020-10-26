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
        int money = Integer.parseInt(sc.nextLine());
        System.out.printf("請輸入身份(Ｎ:非會員 Ｂ:一般會員 Ａ:金卡會員)：");
        switch (sc.nextLine()) {
            case "N":
                System.out.printf("因為您是非會員，所以以原價出售%d", money);
                break;
            case "B":
                money_off = Math.round((float)(money * 0.9));
                System.out.printf("原價為%d元，因為您是一般會員，幫您打九折，您只需要支付%d元", money, money_off);
                break;
            case "A":
                money_off = Math.round((float) (money * 0.8));
                System.out.printf("原價為%d元，因為您是黃金會員，幫您打八折，您只需要支付%d元", money, money_off);
                break;
            default:
                System.out.println("輸入錯誤！請重新執行程式！");
        }
        sc.close();
    }
}