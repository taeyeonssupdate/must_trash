public class Test0304 {
    public static void main(String[] args) {
        A objA = new A(0);
        System.out.println(objA.a);
        System.out.println(objA.s);
        A.getCount();
    }
}

class A {
    int a = 10;
    String s = "Java";
    static int count = 0;

    A(int a, String s) {
        this.a = a;
        this.s = s;
        count++;
    }

    A(int a) {
        this(a, "CSIE");
    }

    void print() {
        System.out.println(s + " " + a);
    }

    static int getCount() {
        return count;
    }
}