import java.util.HashMap;
import java.util.Scanner;

public class a020 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<String, Integer> dict = new HashMap<>();
        dict.put("A", 10);
        dict.put("B", 11);
        dict.put("C", 12);
        dict.put("D", 13);
        dict.put("E", 14);
        dict.put("F", 15);
        dict.put("G", 16);
        dict.put("H", 17);
        dict.put("I", 34);
        dict.put("J", 18);
        dict.put("K", 19);
        dict.put("L", 20);
        dict.put("M", 21);
        dict.put("N", 22);
        dict.put("O", 35);
        dict.put("P", 23);
        dict.put("Q", 24);
        dict.put("R", 25);
        dict.put("S", 26);
        dict.put("T", 27);
        dict.put("U", 28);
        dict.put("V", 29);
        dict.put("W", 32);
        dict.put("X", 30);
        dict.put("Y", 31);
        dict.put("Z", 33);
        String[] numbers = sc.nextLine().split("");
        int ans = Integer.parseInt(String.valueOf(dict.get(numbers[0])).split("")[0]);
        ans += Integer.parseInt(String.valueOf(dict.get(numbers[0])).split("")[1]) * 9;
        ans += Integer.parseInt(numbers[1]) * 8;
        ans += Integer.parseInt(numbers[2]) * 7;
        ans += Integer.parseInt(numbers[3]) * 6;
        ans += Integer.parseInt(numbers[4]) * 5;
        ans += Integer.parseInt(numbers[5]) * 4;
        ans += Integer.parseInt(numbers[6]) * 3;
        ans += Integer.parseInt(numbers[7]) * 2;
        ans += Integer.parseInt(numbers[8]) * 1;
        ans += Integer.parseInt(numbers[9]);
        if (ans % 10 == 0){
            System.out.println("real");
        } else {
            System.out.println("fake");
        }
        sc.close();
    }

}