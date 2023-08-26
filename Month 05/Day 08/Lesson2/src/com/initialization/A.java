package com.initialization;

public class A {
    static int a = 10;
    static int b;

    static { // will call only once when the class is first time loaded
        b = a * 5;
    }
}
