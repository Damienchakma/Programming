package Interface;

public class NiceCar {
    public Engine engine;
    public CDPlayer player;

    NiceCar() {
        engine = new PowerEngine();
        player = new CDPlayer();
    }

    void upgradeEngine() {
        engine = new ElectricEngine();
    }

    void startEngine() {
        engine.start();
    }

    void stopEngine() {
        engine.stop();
    }

    void musicStart() {
        player.start();
    }

    void musicStop() {
        player.stop();
    }
}
