public class Student {
    // properties - noun
    public String name;
    public int rollNum;
    public int _class;
    public char section;
    public int marks;

    // method - verb
    void study() {
        System.out.println(name + " is studying hard.");
    }

    String getGrade() {
        if (marks >= 80) {
            return "A+";
        } else if (marks >= 70) {
            return "A";
        } else if (marks >= 60) {
            return "A-";
        } else if (marks >= 50) {
            return "B";
        } else if (marks >= 40) {
            return "C";
        } else if (marks >= 33) {
            return "D";
        } else {
            return "F";
        }
    }

    Student(String name, int rollNum, int _class, char section, int marks) {
        // initialization
        this.name = name;
        this.rollNum = rollNum;
        this._class = _class;
        this.section = section;
        this.marks = marks;
    }
}
