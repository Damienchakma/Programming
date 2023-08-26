package polymorphism;

public class Circle extends Shape{
    @Override
    void area() {
        System.out.println("My area is pie * r ^ 2");
    }

    static void showing() {
        System.out.println("This is static method in circle class");
    }
}