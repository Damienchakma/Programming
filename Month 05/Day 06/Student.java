public class Student {
    // properties
    private String name;
    private int roll;
    private int cls;

    // getter -> get the value of the property
    // setter -> set the value of the property
//    public String getName() {
//        return name;
//    }
//
//    private void setName(String name) {
//        this.name = name;
//    }


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getRoll() {
        return roll;
    }

    public void setRoll(int roll) {
        this.roll = roll;
    }

    public int getCls() {
        return cls;
    }

    public void setCls(int cls) {
        this.cls = cls;
    }

    public void speak(String str) {
        System.out.println(name + " is speaking: " + str);
    }

    public Student(String name, int roll, int cls) {
        this.name = name;
        this.roll = roll;
        this.cls = cls;
    }

//    public Student(int fatherName, String roll, int css) {
//
//    }

    public Student() {

    }

    public String toString() {
        return name + " is gaming pabg";
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("Object is destroying");
    }
}

/**
 * Data type:
 * 1. Primitive data type: int, double, float, long long, boolean
 * 2. Referenced data type: a) built-in: String, Integer, Double
 *                          b) user-defined: class
 * */