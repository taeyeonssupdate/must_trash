/*
filename:homework_6
function:Recursion 

author:IceCream
time:2020/11/30
*/

import java.util.*;

public class homework_6 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, m;
        System.out.printf("Please Enter N:");
        n = input.nextInt();
        System.out.printf("Please Enter M:");
        m = input.nextInt();
        System.out.printf("C(%d,%d)=%d", n, m, C(n, m));
        input.close();
    }

    public static int C(int n, int m) {
        if (n == m) {
            return 1; // C(n, n) = 1
        } else if (m == 0) {
            return 1; // C(n, 0) = 1
        }
        return C(n - 1, m - 1) + C(n - 1, m); //遞迴C(n-1, m-1) + C(n-1, m)
    }

}