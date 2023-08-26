package inheritance;

public class Box {
    double l, w;
    double h;

    Box() {
        this.l = -1;
        this.w = -1;
        this.h = -1;
    }

    Box(double side) {
        this.l = side;
        this.w = side;
        this.h = side;
    }

    Box(double l, double w, double h) {
        System.out.println("Box constructor is calling");
        this.l =l;
        this.w = w;
        this.h = h;
    }

     Box(Box other) {
        this.l = other.l;
        this.w = other.w;
        this.h = other.h;
     }
}
