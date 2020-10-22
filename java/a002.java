import java.util.Scanner;

public class a002 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] x = sc.nextLine().split(" ");
        System.out.printf("%d", Integer.parseInt(x[0]) + Integer.parseInt(x[1]));
        sc.close();
    }
}
