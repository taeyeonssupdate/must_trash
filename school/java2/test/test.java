package test;

public class test {

    public static void main(String[] args) {
        Student[] myStudent = new Student[3];
        try {
            myStudent[0] = new Student('A', "B001");
            myStudent[1] = new Student("B002", 'B');
            myStudent[2] = new Student('C', "B003");
        } catch (NameException | GradeException e) {
            System.out.println(e.getMessage());
        }
        for (int i = 0; i < 3; i++) {
            System.out.printf("%d %s\n", i, myStudent[i].toString());
        }
        System.out.printf("Totle Student %d\n", Student.total);
    }
}

class NameException extends Exception {
    NameException(String message) {
        super(message);
    }
}

class GradeException extends Exception {
    GradeException(String message) {
        super(message);
    }
}

class Student {
    private String name;
    private char grade;
    static int total = 0;

    Student(char grade) throws GradeException {
        setGrade(grade);
        total++;
    }

    Student(String name, char grade) throws NameException, GradeException {
        setName(name);
        setGrade(grade);
        total++;
    }

    Student(char grade, String name) throws NameException, GradeException {
        setName(name);
        setGrade(grade);
        total++;
    }

    public void setName(String name) throws NameException {
        if (name != "") {
            this.name = name;
        } else {
            throw new NameException("Can't input empty name.");
        }
    }

    public void setGrade(char grade) throws GradeException {
        switch (grade) {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
                this.grade = grade;
                break;
            default:
                throw new GradeException("Grade must be A~F");
        }
    }

    @Override
    public String toString() {
        return name + " " + grade;
    }
}