/*
   按順序完成下列工作:

   1.請為 Area.java 除錯
   2.請將 main 中 的 Rectangle obj1,Triangle obj2,Rectangle obj3 均宣告成Shape類別,
     不改new 的部份
   3.請將 obj1,obj2,obj3 以物件陣列方式宣告
   4.請查詢 java documnets 中 Object class 的 getClass()method ,在印出面積之前先列印類別名稱

*/

//抽象類別 Shape
abstract class Shape {
    int width;
    int height;

    int calculateArea(){
        return this.width*this.height;
    };

    public String toString() {
        return "W:" + width + " H:" + height;
    }

    Shape(int width, int height) {
        this.width = width;
        this.height = height;
    }
}

class Triangle extends Shape {

    Triangle(int width, int height) {
        super(width, height);
    }

    @Override
    public String toString() {
        return "Class name"+this.getClass().getName()+super.toString();
    }
}

class Rectangle extends Shape {

    Rectangle(int width, int height) {
        super(width, height);
    }

    @Override
    public String toString() {
        return "Class name"+this.getClass().getName()+super.toString();
    }
}

public class AreaQ {
    public static void main(String[] args) {
        Shape shape[] = new Shape[3];

        shape[0] = new Rectangle(10, 20);
        System.out.println("Area:" + shape[0].calculateArea());
        shape[1] = new Triangle(12, 5);
        System.out.println("Area:" + shape[1].calculateArea());
        shape[2] = new Rectangle(5, 6);
        System.out.println("Area:" + shape[2].calculateArea());
    }
}
