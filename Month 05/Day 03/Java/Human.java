public class Human {
    // properties
    private int age;
    String hairColor; // Camel Case -> pairwiseDistinctNumbers
    private int wealth;
    int familyMembers;
    String name;

    // Behaviour
    void speak(String str) {
        System.out.println(name + " is speaking: " + str);
    }

    void sleep() {
        System.out.println(name + " is sleeping");
    }

    void Eating() {
        System.out.println(name + " is eating");
    }

    // getter for age
//    int getAge() {
//        return age;
//    }

    // setter for age
//    void setAge(int a) {
//        age = a;
//    }
//

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getHairColor() {
        return hairColor;
    }

    public void setHairColor(String hairColor) {
        this.hairColor = hairColor;
    }

    public int getWealth() {
        return wealth;
    }

    public void setWealth(int wealth) {
        this.wealth = wealth;
    }

    public int getFamilyMembers() {
        return familyMembers;
    }

    public void setFamilyMembers(int familyMembers) {
        this.familyMembers = familyMembers;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Human(int age, int familyMembers, int wealth, String hairColor, String name) {
        this.age = age;
        this.familyMembers = familyMembers;
        this.wealth = wealth;
        this.hairColor = hairColor;
        this.name = name;
    }
}
