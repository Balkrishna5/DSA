import java.util.Scanner;

class Point<T extends Number> {
    private T x;
    private T y;

    // Constructor to initialize x and y
    public Point(T x, T y) {
        this.x = x;
        this.y = y;
    }

    
    public Point<Double> mid(Point<? extends Number> P) {
        double midX = (this.x.doubleValue() + P.x.doubleValue()) / 2;
        double midY = (this.y.doubleValue() + P.y.doubleValue()) / 2;
        return new Point<>(midX, midY);
    }

    @Override
    public String toString() {
        return "(" + x + ", " + y + ")";
    }
}

public class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        