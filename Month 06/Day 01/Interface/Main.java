package Interface;

public class Main {
    public static void main(String[] args) {
//        Engine car = new Car();
//        car.start();
//        car.acc();

//        Music carMusic = new Car();
//        carMusic.start();
//        carMusic.stop();

        NiceCar car = new NiceCar();
        car.startEngine();
        car.musicStart();
        car.musicStop();
        car.upgradeEngine();
        car.startEngine();
    }
}
