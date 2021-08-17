public class Test0318 {

    static enum seasons {
        Spring, Summer, Fall, Winter;
    }
    public static void main(String[] args) {
        for (seasons i: seasons.values()){
            System.out.println(i);
        }
        System.out.println(seasons.Summer);
    }
}