
/*
    filename:homework_2
    function:input +*-/

    author:taeyeonssupdate
    time:2020/10/05
*/
import java.util.Scanner;
import java.lang.Math;

public class homework_2 {
    public static void main(String[] args) {
        int x, y;
        Scanner scanner = new Scanner(System.in);

        System.out.printf("Please input x: ");
        x = scanner.nextInt();
        System.out.printf("Please input y: ");
        y = scanner.nextInt();
        System.out.printf("輸入二個為%d,%d\n", x, y);
        System.out.println("輸出結果為：");
        System.out.printf("%d+%d=%d\n", x, y, x + y);
        System.out.printf("%d-%d=%d\n", x, y, x - y);
        System.out.printf("%d*%d=%d\n", x, y, x * y);
        System.out.printf("%d/%d=%d...%d\n", x, y, Math.round((float) x / (float) y),Math.round((float) x % (float) y));
    }
}
