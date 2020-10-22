import java.util.Scanner;

public class a005 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int loop = Integer.parseInt(sc.nextLine());
        String x;
        String[] xsplit;
        for (; loop > 0; loop--) {
            x = sc.nextLine();
            xsplit = x.split(" ");
            if (Integer.parseInt(xsplit[3]) - Integer.parseInt(xsplit[2]) == Integer.parseInt(xsplit[2]) - Integer.parseInt(xsplit[1])) {
                System.out.printf("%s %d\n", x, Integer.parseInt(xsplit[3]) + Integer.parseInt(xsplit[3]) - Integer.parseInt(xsplit[2]));
            } else {
                System.out.printf("%s %d\n", x, Integer.parseInt(xsplit[3]) * Integer.parseInt(xsplit[3]) / Integer.parseInt(xsplit[2]));
            }
        }
        sc.close();
    }
}
