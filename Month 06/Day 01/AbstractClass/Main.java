package AbstractClass;

public class Main {
    public static void main(String[] args) {
        Parent son = new Son(30);
        son.career();
        son.partner();
        son.normal();

        Parent daughter = new Daughter(28);
        daughter.career();
        daughter.partner();
        daughter.normal();

//        Parent parent = new Parent(19);
        Parent.func();
    }
}
