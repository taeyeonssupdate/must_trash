import java.util.Scanner;

public class a003 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] x = sc.nextLine().split(" ");
        int m = Integer.parseInt(x[0]);
        int d = Integer.parseInt(x[1]);
        int s = (m * 2 + d) % 3;
        switch (s){
            case 0:
                System.out.println("普通");
                break;
            case 1:
                System.out.println("吉");
                break;
            case 2:
                System.out.println("大吉");
                break;
        }
        sc.close();
    }
}
