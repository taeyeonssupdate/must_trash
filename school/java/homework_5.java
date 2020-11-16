/*
filename:homework_5
function:while 

author:taeyeonssupdate
time:2020/11/16
*/

public class homework_5 {
    public static void main(String[] args) {
        int x, y, z; //loop count
        for (x = 1; x < 9; x += 3) { //123 456 789 三個三個跳
            for (y = 1; y < 10; y++) { //1~9
                for (z = 0; z < 3; z++) { //loop 3次 x的三次
                    System.out.printf("%d*%d= %d ", x + z, y, (x + z) * y);
                }
                System.out.println();
            }
            System.out.println();
        }
    }
}