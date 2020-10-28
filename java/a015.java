import java.util.Scanner;

public class a015 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (input.hasNext()) {
            int a = input.nextInt();
            int b = input.nextInt();
            int A[][] = new int[a][b];
            for (int i = 0; i < a; i++)
                for (int j = 0; j < b; j++)
                    A[i][j] = input.nextInt();
            for (int i = 0; i < b; i++) {
                for (int j = 0; j < a; j++)
                    System.out.print(A[j][i] + " ");
                System.out.println();
            }
        }
        input.close();
    }
}
