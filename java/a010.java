import java.util.Scanner;

public class a010 {
    public static void main(String[] args) {
        int input_num,count,cache=0;
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()){
            input_num = Integer.parseInt(sc.next());
            if (input_num == 1){
                System.out.printf("%d\n", 1);
            } else {
                for (count = 2; count <= input_num; count++){
                    cache = 0;
                    while (input_num % count == 0){
                        input_num /= count;
                        cache++;
                    } if (input_num == 1) {
                        if (cache > 1) {
                            System.out.printf("%d^%d\n", count, cache);
                        } else if (cache == 1) {
                            System.out.printf("%d\n", count);
                        }
                    } else {
                        if (cache > 1) {
                            System.out.printf("%d^%d * ", count, cache);
                        } else if (cache == 1){
                            System.out.printf("%d * ", count);
                        }
                    }
                }
            }
        }
        sc.close();
    }
}
