import java.util.Scanner;

public class a009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] ascii = sc.next().toCharArray();
        for (int x: ascii){
            System.out.print((char)(x-7));
        }
        sc.close();
    }
}
