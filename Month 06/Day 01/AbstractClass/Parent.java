package AbstractClass;

public abstract class Parent {

    int age;
    final int value;

    Parent(int age) {
        this.age = age;
        value = 10;
    }

    static void func() {
        System.out.println("This is the static method");
    }

    void normal() {
        System.out.println("This is a normal method");
    }

    abstract void career();
    abstract void partner();
}
