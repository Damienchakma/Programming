package AbstractClass;

public class Daughter extends Parent{
    Daughter(int age) {
        super(age);
    }
    @Override
    void career() {
        System.out.println("I wanna be a software engineer");
    }

    @Override
    void partner() {
        System.out.println("I love Tom cruse");
    }
}
