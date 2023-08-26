package Interface;

public class Car implements Brake, Engine, Music{
    @Override
    public void brake() {
        System.out.println("Simple car brake working");
    }

    @Override
    public void start() {
        System.out.println("Simple car engine starting");
    }

    @Override
    public void stop() {
        System.out.println("Simple car engine stopping");
    }

    @Override
    public void acc() {
        System.out.println("Simple car accelerating");
    }
}
