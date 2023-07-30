// This is single line comment
/*
    This is a
    multi-line comment
 */

/**
 * -------------- Author: Daimian --------------
 * -------------- Date: 7/14/23 ----------------
 * -------------- OOP concepts -----------------
 * -------------- class ------------------------ done
 * -------------- object ----------------------- done
 * -------------- properties, method ----------- done
 * -------------- constructor ------------------ done
 * -------------- getter, setter ---------------
 * -------------- static keyword ---------------
 * -------------- toString method --------------
 * -------------- this keyword ----------------- done
 * */

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World");
        // int a;
        Student arif = new Student("Arif", 56, 8, 'A', 76);
        Student alif = new Student("Alif", 47, 8, 'B', 55);

        System.out.println("Name: " + arif.name);
        System.out.println("Roll: " + arif.rollNum);
        System.out.println("Section: " + arif.section);
        System.out.println("Class: " + arif._class);
        System.out.println("Marks: " + arif.marks);

        System.out.println("Name: " + alif.name);
        System.out.println("Roll: " + alif.rollNum);
        System.out.println("Section: " + alif.section);
        System.out.println("Class: " + alif._class);
        System.out.println("Marks: " + alif.marks);
        // put, check, change

        arif.study();
        System.out.println("Arif's grade: " + arif.getGrade());

        alif.study();
        System.out.println("Alif's grade: " + alif.getGrade());
    }
}
