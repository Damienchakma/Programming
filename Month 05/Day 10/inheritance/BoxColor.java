package inheritance;

public class BoxColor extends Box{
    double color;

    BoxColor() {
        super();
        this.color = 7.5;
    }

    BoxColor(double side, double color) {
        super(side);
        this.color = color;
    }

    BoxColor(double l, double w, double h, double color) {
        super(l, w, h);
        this.color = color;
    }

    BoxColor(BoxColor other) {
        super(other);
        this.color = color;
    }
}
