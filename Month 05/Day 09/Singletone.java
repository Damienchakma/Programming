public class Singletone {
    private Singletone() {

    }

    private static Singletone instance;

    public static Singletone getInstance() {
        if (instance == null) {
            instance = new Singletone();
            System.out.println("Creating a new object");
        }

        return instance;
    }
}
