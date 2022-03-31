/**
 * App
 */
public class App {

    public static void main(String[] args) {
        String student_info[][] = {
                { "PUCCA", "001", "0800123456" },
                { "GARU", "002", "0800456789" },
                { "阿嬤", "003", "0912345671" },
                { "阿公", "004", "0987654321" },
        };
        int scores[][] = {
                { 59, 59, 60, 100 },
                { 59, 60, 70, 80 },
                { 59, 60 },
                { 59, 100 },
        };
        Student student[] = new Student[4];
        student[0] = new College(
                student_info[0][0],
                student_info[0][1],
                student_info[0][2],
                scores[0]);
        student[1] = new College(
                student_info[1][0],
                student_info[1][1],
                student_info[1][2],
                scores[1]);
        student[2] = new Graduate(
                student_info[2][0],
                student_info[2][1],
                student_info[2][2],
                scores[2],
                "我不會寫論文",
                "陳美之");
        student[3] = new Graduate(
                student_info[3][0],
                student_info[3][1],
                student_info[3][2],
                scores[3],
                "我會寫論文",
                "陳大支");
        printStudent(student);
    }

    static void printStudent(Student[] students) {
        for (Student student : students) {
            System.out.println(student);
        }
    }
}

class Student {
    String name, id, number;

    Student(String name, String id, String number) {
        this.name = name;
        this.id = id;
        this.number = number;
    }

    @Override
    public String toString() {
        return "Name: " + name + "\nID: " + id + "\nNumber: " + number;
    }
}

class College extends Student {
    int scores[] = new int[4];

    College(String name, String id, String number, int scores[]) {
        super(name, id, number);
        this.scores = scores;
    }

    int verity() {
        int i = 0;
        for (int score : scores) {
            if (score >= 60) {
                i++;
            }
        }
        return i;
    }

    double average() {
        int sum = 0;
        for (int d : scores) {
            sum += d;
        }
        return sum / scores.length;
    }

    @Override
    public String toString() {
        return "[College]\n"
            + super.toString()
            + "\n平均成績: "
            + average()
            + "\n不及格科目數: "
            + verity()
            + "\n\n";
    }
}

class Graduate extends Student {
    int scores[] = new int[2];
    String essay_title, teacher;

    Graduate(String name, String id, String number, int scores[], String essay_title, String teacher) {
        super(name, id, number);
        this.scores = scores;
        this.essay_title = essay_title;
        this.teacher = teacher;
    }

    int verity() {
        int i = 0;
        for (int score : scores) {
            if (score >= 70) {
                i++;
            }
        }
        return i;
    }

    double average() {
        int sum = 0;
        for (int d : scores) {
            sum += d;
        }
        return sum / scores.length;
    }

    @Override
    public String toString() {
        return "[Graduate]\n"
            + super.toString()
            + "\n論文題目: "
            + essay_title
            + "\n指導老師: "
            + teacher
            + "\n平均成績: "
            + average()
            + "\n不及格科目數: "
            + verity()
            + "\n\n";
    }

}