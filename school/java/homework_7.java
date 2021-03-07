/*
filename:homework_7
function:Big number

author:taeyeonssudpate
time:2020/12/14
*/

import java.util.Scanner;

public class homework_7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Please input x: ");
        String x = String.format("%20s", sc.next()).replace(" ", "0"); // sc掃入格式為%2s的str並替換空白為0
        System.out.printf("Please input y: ");
        String y = String.format("%20s", sc.next()).replace(" ", "0"); // sc掃入格式為%2s的str並替換空白為0
        String answer = "";
        int w = 0;
        for (int i = x.length() - 1; i >= 0; i--) {
            int c = y.charAt(i) + x.charAt(i) - 96 + w; // 數字str-48=char (兩個96)
            w = c / 10; // 餘數
            answer = (c % 10) + answer; 
        }
        answer = w + answer;
        System.out.println(answer.replaceFirst("^0+(?!$)", ""));
        if (sc != null) sc.close();
    }
}
