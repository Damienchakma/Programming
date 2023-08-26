package com.fun;

public class Human {
    int age;
    String name;
    int salary;

    static long population = 0;

    Human(int age, String name, int salary) {
        this.age = age;
        this.name = name;
        this.salary = salary;
        population++;
    }

    void fun() {
        System.out.println("I am a func");
        System.out.println(population);
        fun2();
    }

    static void fun2() {
        System.out.println("I am a static method");
//        System.out.println(age);
//        fun();

        Human obj = new Human(13, "Onb", 139203);
        System.out.println(obj.age);
        obj.fun();
    }

    static void alu() {
        System.out.println(population);
        fun2();
    }

    void potol() {
        System.out.println(age);
        fun();
        this.age = 18;
    }

    static void korola() {
        Human.population = 100;
    }
}
