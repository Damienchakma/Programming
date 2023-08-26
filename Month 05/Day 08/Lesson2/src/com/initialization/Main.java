package com.initialization;

public class Main {
    public static void main(String[] args) {
        A a = new A();
        System.out.println(A.a + " " + A.b);

        A.b += 3;
        System.out.println(A.a + " " + A.b);

        A b = new A();
        System.out.println(A.a + " " + A.b);
    }
}
