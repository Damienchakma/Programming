package polymorphism;

public class Main {
    public static void main(String[] args) {
        Shape shape = new Shape();

        Shape square = new Square();
        Shape circle = new Circle();
        Shape rectangle = new Rectangle();

        shape.area();
        circle.area();
        rectangle.area();
        square.area();

        circle.showing();
    }
}
