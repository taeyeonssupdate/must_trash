class Shape {
    int h = 10;
    int w = 20;
}

interface Area {
    int calArea();
}

class Rectangle extends Shape implements Area {
    @Override
    public int calArea() {
        return h * w;
    }
}

class Triangle extends Shape implements Area {
    @Override
    public int calArea() {
        return (h * w) / 2;
    }
}

class Circle implements Area {
    int r = 10;

    @Override
    public int calArea() {
        return r * r * 314 / 100;
    }
}

class TestA {
    void area(Area s) {
        System.out.println(s.calArea()); // ??object???
    }

    public static void main(String[] args) {
        Area[] s = { new Rectangle(), new Triangle(), new Circle() };
        TestA objA = new TestA();
        for (int i = 0; i < s.length; i++)
            objA.area(s[i]);
    }
}