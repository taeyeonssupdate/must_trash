/**
 * Main
 */
public class Main {

    public static void main(String[] args) {
        A obj1 = new A();
        System.out.println(obj1.print());
    }
}
class B{
    private int i=0;
    private void print(){};
}
class A extends B{

}