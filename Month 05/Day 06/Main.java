public class Main {

    static void swap(Integer a, Integer b) {
        Integer temp = a;
        a = b;
        b = temp;
    }

    static void change(Student stu) {
        stu.setName("Habib");
    }

    public static void main(String[] args) {
        // System.out.println("Hello World");
//        Student damien;
//        damien = new Student("Damien", 1, 6);

//        System.out.println(damien.name);
//        damien.speak("I am studying");
//
//        Student rakib = new Student();
//        System.out.println(damien.name);
//        damien.name = "Flash";
//        System.out.println(damien.name);

//        damien.setName("Damiiiiien");
//        System.out.println(damien.getName());
//
//        int a = 5;
//        System.out.println(a);
//        System.out.println(damien);

//        int a = 5;
//        Integer b = 5;


//        Integer a = 1, b = 2;
//
//        System.out.println(a + " " + b);
//        swap(a, b);
//        System.out.println(a + " " + b);

//        Student damien = new Student("Damien", 1, 2);
//        change(damien);
//        System.out.println(damien.getName());

//        final int a = 3;
//        a = 10;

//        final Student damien = new Student("Damien", 1, 2);
//        damien.setName("Habib");
        // damien = new Student("Rakib", 1, 23);

//        Integer a = 5;
//        Integer b = 10;
//        System.out.println(a + b);
        Student student;
        for (int i = 1; i <= 1000000000; i++) {
            student = new Student("Fahim", 1, 3);
        }
    }
}