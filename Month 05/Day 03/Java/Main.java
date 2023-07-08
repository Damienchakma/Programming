import java.util.*;

public class Main {
    static int func(int a, int b) {
        System.out.println("Inside function");
        return a + b;
    }
    public static void main(String[] args) {
//        System.out.println("Hello World");
//        int a;

//        System.out.print("Enter an integer: ");
//
//        Scanner scanner = new Scanner(System.in);
//        a = scanner.nextInt();
//
//        System.out.println("Entered input is " + a);
//
//        float q, b;
//        double c, d;
//        char f, s;
//        String str;
//        boolean isOK = false;

//        Scanner scanner = new Scanner(System.in);
//        int a = scanner.nextInt();
//        if (a > 100) {
//            System.out.println("Invalid");
//        } else if (a == 100) {
//            System.out.println("Full marks");
//        } else if (a >= 90) {
//            System.out.println("A+");
//        } else {
//            System.out.println("Fail");
//        }

//        for (int i = 1; i <= 100; i++) {
//            System.out.println(i);
//        }

//        int i = 1;
//        while (i <= 100) {
//            System.out.println(i);
//            i++;
//        }

//        int i = 1;
//        do {
//            System.out.println(i++);
//        } while (i <= 100);

//        int [] a = new int[10];
//        for (int i = 0; i < 10; i++) {
//            a[i] = scanner.nextInt();
//        }
//
//        for (int i = 0; i < 10; i++) {
//            System.out.println(a[i]);
//        }

//        int sum = func(5, 10);
//        System.out.println("Sum is: " + sum);

        Human damian = new Human(14, 6, 1000, "Black", "Damian");
//        damian.setAge(14);
//        damian.setHairColor("Black");
//        damian.setName("Damian");
//        damian.setWealth(1000);
//        damian.setFamilyMembers(6);

        Human adib = new Human(15, 10, 100, "Grey", "Adib");
//        adib.setName("Adib");
//        adib.setAge(15);
//        adib.setHairColor("Grey");
//        adib.setWealth(100);
//        adib.setFamilyMembers(10);

        System.out.println(damian.getName() + "'s hair color is " + damian.getHairColor());
        System.out.println(adib.getName() + "'s hair color is " + adib.getHairColor());

        damian.sleep();
        adib.sleep();

        damian.speak("Hello, Adib!");
        adib.speak("Hi, Damian!");
    }
}
