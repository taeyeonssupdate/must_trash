public class Dog{
    private int age;
    public Dog(int x){
        age = x;
    }
    public int getAge(){
        Dog d = new Dog(4);
        return age;
    }
    main(){
        Dog d = new Dog(8);
        System.out.println(d.getAge);
    }
}