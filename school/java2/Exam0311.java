public class Exam0311 {
    public static void main(String[] args) {
        Student s1 = new Student("Lee", "B001");
        Student s2 = new Student("Lee", "B001");
        Student s3 = new Student("Lee", "B001");
        System.out.println(s1.getStudentData() + s1.getAverage());
        System.out.println(s2.getStudentData() + s2.getAverage());
        System.out.println(s3.getStudentData() + s3.getAverage());
        System.out.println(Student.count);
    }
}

class Student {
    String name, id;
    int score1, score2;
    static int count = 0;

    Student(String name, String id, int score1, int score2) {
        this.name = name;
        this.id = id;
        this.score1 = score1;
        this.score2 = score2;
        count++;
    }

    Student(String name, String id) {
        this(name, id, -1, -1);
    }

    Student() {
        this("未填", "0000", -1, -1);
    }

    double getAverage() {
        return (score1 + score2) / 2.0;
    }

    String getStudentData() {
        return name + " " + id + " " + score1 + " " + score2;
    }

    static int getCount() {
        return count;
    }
}