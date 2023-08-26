import java.util.stream.DoubleStream;


public class A {

    static class B {
        static String name;
        void fly() {
            System.out.println("I am flying");
        }
        B(String name) {
            B.name = name;
        }
    }
    int a;
    A(int a) {
        this.a = a;
    }
    void something() {
        System.out.println("Hello");
    }

    public static void main(String[] args) {
        A a = new A(19);
        a.something();

        B damian = new B("Damian");
        B arif = new B("Arif");

        System.out.println(B.name); // Arif
        System.out.println(B.name); // Arif
    }
}
