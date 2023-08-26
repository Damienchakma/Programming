package inheritance;

public class BoxWeight extends Box {
    double weight;

    BoxWeight() {
        super();
        this.weight = -1;
    }

    BoxWeight(double side, double weight) {
        super(side);
        this.weight = weight;
    }

    BoxWeight(double l, double w, double h, double weight) {
        super(l, w, h);
        this.weight = weight;
        System.out.println("Box weight constructor calling");
    }

    BoxWeight(BoxWeight other) {
//        super(other);
        this.l = other.l;
        this.w = other.w;
        this.h = other.h;
    }
}
