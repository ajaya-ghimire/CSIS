class Point {
    private int x;
    private int y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }
}

abstract class Quadrilateral {
    private Point point1;
    private Point point2;
    private Point point3;
    private Point point4;

    public Quadrilateral(Point p1, Point p2, Point p3, Point p4) {
        this.point1 = p1;
        this.point2 = p2;
        this.point3 = p3;
        this.point4 = p4;
    }

    public Point getPoint1() {
        return point1;
    }

    public Point getPoint2() {
        return point2;
    }

    public Point getPoint3() {
        return point3;
    }

    public Point getPoint4() {
        return point4;
    }

    public abstract double getPerimeter();
    public abstract double getArea();
}

class Trapezoid extends Quadrilateral {
    public Trapezoid(Point p1, Point p2, Point p3, Point p4) {
        super(p1, p2, p3, p4);
    }

    @Override
    public double getPerimeter() {
        Point p1 = getPoint1();
        Point p2 = getPoint2();
        Point p3 = getPoint3();
        Point p4 = getPoint4();

        double side1 = Math.sqrt(Math.pow(p1.getX() - p2.getX(), 2) + Math.pow(p1.getY() - p2.getY(), 2));
        double side2 = Math.sqrt(Math.pow(p2.getX() - p3.getX(), 2) + Math.pow(p2.getY() - p3.getY(), 2));
        double side3 = Math.sqrt(Math.pow(p3.getX() - p4.getX(), 2) + Math.pow(p3.getY() - p4.getY(), 2));
        double side4 = Math.sqrt(Math.pow(p4.getX() - p1.getX(), 2) + Math.pow(p4.getY() - p1.getY(), 2));

        double perimeter = side1 + side2 + side3 + side4;
        return perimeter;
    }

    @Override
public double getArea() {
    Point p1 = getPoint1();
    Point p2 = getPoint2();
    Point p3 = getPoint3();
    Point p4 = getPoint4();

    double base1 = Math.sqrt(Math.pow(p1.getX() - p2.getX(), 2) + Math.pow(p1.getY() - p2.getY(), 2));
    double base2 = Math.sqrt(Math.pow(p3.getX() - p4.getX(), 2) + Math.pow(p3.getY() - p4.getY(), 2));
    double height = Math.abs(p2.getY() - p1.getY());  // Calculate the height

    double area = 0.5 * (base1 + base2) * height;
    return area;
}

}

class Parallelogram extends Quadrilateral {
    public Parallelogram(Point p1, Point p2, Point p3, Point p4) {
        super(p1, p2, p3, p4);
    }

    @Override
    public double getPerimeter() {
        double side1 = Math.sqrt(Math.pow(getPoint1().getX() - getPoint2().getX(), 2) + Math.pow(getPoint1().getY() - getPoint2().getY(), 2));
        double side2 = Math.sqrt(Math.pow(getPoint2().getX() - getPoint3().getX(), 2) + Math.pow(getPoint2().getY() - getPoint3().getY(), 2));
        double side3 = Math.sqrt(Math.pow(getPoint3().getX() - getPoint4().getX(), 2) + Math.pow(getPoint3().getY() - getPoint4().getY(), 2));
        double side4 = Math.sqrt(Math.pow(getPoint4().getX() - getPoint1().getX(), 2) + Math.pow(getPoint4().getY() - getPoint1().getY(), 2));

        double perimeter = side1 + side2 + side3 + side4;
        return perimeter;
    }

    @Override
    public double getArea() {
        double length = Math.sqrt(Math.pow(getPoint1().getX() - getPoint2().getX(), 2) + Math.pow(getPoint1().getY() - getPoint2().getY(), 2));
        double width = Math.sqrt(Math.pow(getPoint2().getX() - getPoint3().getX(), 2) + Math.pow(getPoint2().getY() - getPoint3().getY(), 2));

        double area = length * width;
        return area;
    }
}

class Rectangle extends Parallelogram {
    public Rectangle(Point p1, Point p2, Point p3, Point p4) {
        super(p1, p2, p3, p4);
    }

    @Override
    public double getArea() {
        double side = Math.sqrt(Math.pow(getPoint1().getX() - getPoint2().getX(), 2) + Math.pow(getPoint1().getY() - getPoint2().getY(), 2));

        double area = side * side;
        return area;
    }
}

class Square extends Rectangle {
    public Square(Point p1, Point p2, Point p3, Point p4) {
        super(p1, p2, p3, p4);
    }
}

public class Inheritance {
    public static void main(String[] args) {
        Point p1 = new Point(0, 0);
        Point p2 = new Point(4, 0);
        Point p3 = new Point(4, 3);
        Point p4 = new Point(0, 3);

        Trapezoid trapezoid = new Trapezoid(p1, p2, p3, p4);
        Parallelogram parallelogram = new Parallelogram(p1, p2, p3, p4);
        Rectangle rectangle = new Rectangle(p1, p2, p3, p4);
        Square square = new Square(p1, p2, p3, p4);

        System.out.println("Area of Trapezoid: " + trapezoid.getArea());
        System.out.println("Area of Parallelogram: " + parallelogram.getArea());
        System.out.println("Area of Rectangle: " + rectangle.getArea());
        System.out.println("Area of Square: " + square.getArea());
    }
}
