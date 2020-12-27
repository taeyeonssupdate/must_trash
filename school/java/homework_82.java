/*
filename:homework_82
function:try catch finally

author:taeyeonssudpate
time:2020/12/21
*/

import java.util.Scanner;

public class homework_82 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] x = new int[3];
        int[] y = new int[3];
        System.out.println("數入x,y陣列值(3)");
        for (int i = 0; i < 3; i++) {
            System.out.printf("Please input x[%d]: ", i);
            x[i] = sc.nextInt();
            System.out.printf("Please input y[%d]: ", i);
            y[i] = sc.nextInt();
        }
        System.out.println("執行四次(嘗試超出陣列範圍)");
        for (int i = 0; i <= 3; i++) {
            try {
                System.out.printf("x[%d]/y[%d] = ", i, i);
                System.out.printf("%d/%d = ", x[i], y[i]);
                System.out.println(x[i] / y[i]);
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("超出陣列");
            } catch (ArithmeticException e) {
                System.out.println("除數不能為0");
            }
        }
    }
}