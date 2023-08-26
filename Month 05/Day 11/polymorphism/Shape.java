package polymorphism;

public class Shape {
    // Early binding
//    final void area() {
//        System.out.println("Area in shape class");
//    }

    void area() {
        System.out.println("Area");
    }

    static void showing() {
        System.out.println("This is static method in shape class");
    }
}
