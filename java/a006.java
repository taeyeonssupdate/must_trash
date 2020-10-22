import java.util.Scanner;

public class a006 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] x = sc.nextLine().split(" ");
        int a = Integer.parseInt(x[0]);
        int b = Integer.parseInt(x[1]);
        int c = Integer.parseInt(x[2]);
        if (b * b - 4 * a * c < 0){
            System.out.printf("No real root\n");
        } else if (b * b - 4 * a * c == 0) {
            System.out.printf("Two same roots x=%d\n", -b / (2 * a));
        } else if (b * b - 4 * a * c > 0) {
            double temp = Math.sqrt(b * b - 4 * a * c);
            System.out.printf("Two different roots x1=%d , x2=%d\n",  (int)(-b + temp) / (2 * a), (int)(-b - temp) / (2 * a));
        }
        sc.close();
    }
}