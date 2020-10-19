/*
    filename:Account.java
    function:Account class
    package:homework_3

    author:taeyeonssupdate
    time:2020/10/19
*/

package homework_3;

import java.util.Scanner;

public class Account {
    String number, name, ch, en, ma;
    Scanner sc = new Scanner(System.in);

    public Account() {
        number = scan();
        name = scan();
        ch = scan();
        en = scan();
        ma = scan();
    }

    public String scan() {
        return sc.nextLine();
    }

    public void print_out() {
        System.out.printf("%s\n%s\n%s\n%s\n%s\n", number, name, ch, en, ma);
    }
}