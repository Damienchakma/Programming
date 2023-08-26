package access_control.Jack;

public class Dog {
    protected void bark() {
        System.out.println("Veu veu");
    }

    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.bark();
    }
}
