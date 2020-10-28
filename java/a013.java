import java.lang.Math;
import java.util.Scanner;
import java.util.HashMap;

public class a013 {
    public static int to_str(String str) {
        HashMap<String, Integer> a = new HashMap<>();
        a.put("I", 1);
        a.put("V", 5);
        a.put("X", 10);
        a.put("L", 50);
        a.put("C", 100);
        a.put("D", 500);
        a.put("M", 1000);
        int ans = 0;
        for (int i = 0; i < str.length() - 1; i++) {
            if (a.get(str.split("")[i]) < a.get(str.split("")[i + 1])) {
                ans -= a.get(str.split("")[i]);
            } else {
                ans += a.get(str.split("")[i]);
            }
        }
        ans += a.get(str.split("")[str.length() - 1]);
        return ans;
    }

    static String to_roman(int num) {
        if (num == 0){
            return "ZERO";
        }
        int[] val = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
        String[] syb = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        String roman_num = "";
        int i = 0;
        while (num > 0) {
            for (int x = 0; 0 < Math.floor(num / val[i]); x++) {
                roman_num+=syb[i];
                num -= val[i];
                x++;
            }
            i+=1;
        }
        return roman_num;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] inputs;
        while (sc.hasNext()) {
            inputs = sc.nextLine().split(" ");
            if (inputs.length == 2) {
                System.out.println(to_roman(Math.abs(to_str(inputs[0]) - to_str(inputs[1]))));
            }
        }
        sc.close();
    }
}
