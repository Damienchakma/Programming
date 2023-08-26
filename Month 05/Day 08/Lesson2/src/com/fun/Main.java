package com.fun;

public class Main {
    public static void main(String[] args) {
        Human damien = new Human(12, "Damien", 10000);
        Human rakib = new Human(13, "Rakib", 12000);
        Human asif = new Human(14, "Asif", 12222);

        System.out.println(Human.population);
        rakib.fun();

        Human.fun2();
        Human.fun2();

        rakib.potol();
        damien.potol();
    }
}
