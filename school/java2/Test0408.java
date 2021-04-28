public class Test0408 {
    public static void main(String[] args) {
        A obj1=new A();
        A obj2=new A(100,200);
        System.out.println(obj1);
        System.out.println(obj2);

        B objB1=new B();
        B objB2=new B(55,66,77);
        System.out.println(objB1);
        System.out.println(objB2);

        System.out.println(A.d);
        System.out.println(B.d);
    }
}
class A{
	int a=5;
	int b=10;
	static int d=100;
	A(){}
	A(int a,int b){
		this.a=a;
		this.b=b;
	}
	public String toString(){
		return "a="+a+" b="+b;
	}
}
class B extends A{
	int c=50;
	static int d=-100;
	B(){ super(-1,-2);}
	B(int a,int b,int c){ super(a,b); this.c=c;}
	public String toString(){
		return "a="+a+" b="+b+" c="+c;
	}
}