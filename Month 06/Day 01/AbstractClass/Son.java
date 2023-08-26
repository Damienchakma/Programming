package AbstractClass;

public class Son extends Parent{
    @Override
    void career() {
        System.out.println("I wanna be a doctor");
    }

    @Override
    void partner() {
        System.out.println("I love agenlina jolie");
    }

    Son(int age) {
        super(age);
    }
}
