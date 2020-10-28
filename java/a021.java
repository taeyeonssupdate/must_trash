import java.util.Scanner;
import java.math.BigInteger;

public class a021 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a = new BigInteger(sc.next());
        String symbol = sc.next();
        BigInteger b = new BigInteger(sc.next());
        if (symbol.equals("+"))System.out.println(a.add(b));
        if (symbol.equals("-"))System.out.println(a.subtract(b));
        if (symbol.equals("*"))System.out.println(a.multiply(b));
        if (symbol.equals("/"))System.out.println(a.divide(b));
        sc.close();
    }
}
