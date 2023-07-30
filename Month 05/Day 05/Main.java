public class Main {
    public static void main(String[] args) {
        // Bike b1 = new Bike();
        Bike r15M = new Bike("Yamaha R15M", 250, 200, 30, 10000);
        Bike Mt15 = new Bike("Mt 15", 350, 400, 50, 40000);
        Bike honda156 = new Bike("Honda 156");
        Bike suzuki = new Bike();

        System.out.println(r15M.name);
        System.out.println(Mt15.name);

        System.out.println("Discount offer!! R15M Price only " + r15M.getDiscountPrice(99));
        System.out.println("Discount offer!! Mt-15 Price only " + Mt15.getDiscountPrice(99));

        System.out.println(r15M.maxSpeed);
        r15M.maxSpeed = 800;
        System.out.println(r15M.maxSpeed);
    }
}

/**
 * Stack memory
 * Heap memory
 * */

/**
 * while creating an object:
 * Bike r15M = new Bike("Yamaha R15M", 250, 200, 30, 10000);
 *
 * 3 ->
 * 1. Declaration == Bike r15M
 * 2. Instantiation == new
 * 3. Initialization == Bike("Yamaha R15M", 250, 200, 30, 10000)
 * */