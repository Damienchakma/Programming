package polymorphism;

public class MathOperations {
    int sum(int a, int b) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }

    public static void main(String[] args) {
        MathOperations mathOperations = new MathOperations();
        System.out.println(mathOperations.sum(2, 12));
        System.out.println(mathOperations.sum(1, 2,3));
    }
}
