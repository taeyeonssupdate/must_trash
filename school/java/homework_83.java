/*
filename:homework_83
function:try catch finally

author:taeyeonssudpate
time:2020/12/21
*/

import java.util.Scanner;

public class homework_83 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // create scanner
        System.out.printf("Input: ");
        String[] str = sc.nextLine().split("/"); // "12345/10" >> {"12345","10"}
        int[] number = { Integer.parseInt(str[0]), Integer.parseInt(str[1]) }; // str >> int {12345,10}
        
        int[] x = new int[5]; // 固定為5
        int j = 0;
        try {
            for (String k : str[0].split("")) {
                x[j++] = Integer.parseInt(k); // 嘗試塞入引發陣列錯誤
            }

            System.out.printf("%d / %d = %d\n", number[0], number[1], number[0] / number[1]); // 除法
            System.out.println("正確運行");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("超出陣列");
        } catch (ArithmeticException e) {
            System.out.println("除數不能為0");
        }
    }
}