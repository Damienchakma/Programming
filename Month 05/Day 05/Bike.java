/**
 * class is the template and object is the instance
 * */

public class Bike {
    // properties - noun
    public String name;
    public int power;
    public int maxSpeed;
    public int mileage;
    public int price;

    // methods - verb
    public void ride() {
        System.out.println("Riding at max speed: " + maxSpeed);
    }

    public int getDiscountPrice(int discountPercentage) {
        /**
         * example:
         * price = 800
         * discount = 25% = 25/100 = 0.25
         * Total discount = 800 * 0.25 = 200
         * Discount Price = 800 - 200 = 600
         * */
        float discount = (float)discountPercentage / 100;
        int totalDiscount = (int)(price * discount);
        int discountPrice = price - totalDiscount;

        return discountPrice;
    }

//    Bike(String name, int power, int maxSpeed, int mileage, int price) {
//        this.name = name;
//        this.power = power;
//        this.price = price;
//        this.maxSpeed = maxSpeed;
//        this.mileage = mileage;
//    }


    public Bike(String name, int power, int maxSpeed, int mileage, int price) {
        this.name = name;
        this.power = power;
        this.maxSpeed = maxSpeed;
        this.mileage = mileage;
        this.price = price;
    }

    public Bike(String name) {
        this.name = name;
    }

    // default constructor
    public Bike() {

    }
}

/**
 * 10/3 = 3.33333333333333333333333
 * integer division -> 10/3 = 3
 * */