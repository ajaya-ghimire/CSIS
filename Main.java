class Point {
    private int x, y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // getters and setters for x and y

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}

class Quadrilateral {
    private Point point1, point2, point3, point4;

    public Quadrilateral(Point point1, Point point2, Point point3, Point point4) {
        this.point1 = point1;
        this.point2 = point2;
        this.point3 = point3;
        this.point4 = point4;
    }

    // getters and setters for the points

    public Point getPoint1() {
        return point1;
    }

    public void setPoint1(Point point1) {
        this.point1 = point1;
    }

    public Point getPoint2() {
        return point2;
    }

    public void setPoint2(Point point2) {
        this.point2 = point2;
    }

    public Point getPoint3() {
        return point3;
    }

    public void setPoint3(Point point3) {
        this.point3 = point3;
    }

    public Point getPoint4() {
        return point4;
    }

    public void setPoint4(Point point4) {
        this.point4 = point4;
    }

    public double calculateArea() {
        // Decompose the quadrilateral into two triangles: ABC and CDA
        double areaTriangleABC = calculateTriangleArea(getPoint1(), getPoint2(), getPoint3());
        double areaTriangleCDA = calculateTriangleArea(getPoint3(), getPoint4(), getPoint1());

        // Sum of the areas of the two triangles gives the area of the quadrilateral
        return areaTriangleABC + areaTriangleCDA;
    }

    private double calculateTriangleArea(Point point1, Point point2, Point point3) {
        // Using the formula for the area of a triangle given its three vertices
        return 0.5 * Math.abs(point1.getX() * (point2.getY() - point3.getY())
                + point2.getX() * (point3.getY() - point1.getY())
                + point3.getX() * (point1.getY() - point2.getY()));
    }
}

class Trapezoid extends Quadrilateral {
    // Additional properties and methods specific to Trapezoid

    public Trapezoid(Point point1, Point point2, Point point3, Point point4) {
        super(point1, point2, point3, point4);
    }

    @Override
    public double calculateArea() {
        // Get the coordinates of the four points
        Point point1 = getPoint1();
        Point point2 = getPoint2();
        Point point3 = getPoint3();
        Point point4 = getPoint4();

        // Calculate the lengths of the bases (b1 and b2)
        double b1 = Math.sqrt(Math.pow(point2.getX() - point1.getX(), 2) + Math.pow(point2.getY() - point1.getY(), 2));
        double b2 = Math.sqrt(Math.pow(point4.getX() - point3.getX(), 2) + Math.pow(point4.getY() - point3.getY(), 2));

        // Calculate the height (h)
        double h = Math.abs(point2.getY() - point1.getY());

        // Calculate the area using the trapezoid formula
        return 0.5 * (b1 + b2) * h;
    }
}

class Parallelogram extends Quadrilateral {
    // Additional properties and methods specific to Parallelogram

    public Parallelogram(Point point1, Point point2, Point point3, Point point4) {
        super(point1, point2, point3, point4);
    }

    @Override
    public double calculateArea() {
        // Get the coordinates of the four points
        Point point1 = getPoint1();
        Point point2 = getPoint2();
        Point point3 = getPoint3();
        Point point4 = getPoint4();

        // Calculate the base (b) using the distance formula
        double base = Math.sqrt(Math.pow(point2.getX() - point1.getX(), 2) + Math.pow(point2.getY() - point1.getY(), 2));

        // Calculate the height (h)
        double height = Math.abs(point2.getY() - point1.getY());

        // Calculate the area using the parallelogram formula
        return base * height;
    }
}

class Rectangle extends Parallelogram {
    // Additional properties and methods specific to Rectangle

    public Rectangle(Point point1, Point point2, Point point3, Point point4) {
        super(point1, point2, point3, point4);
    }

   @Override
    public double calculateArea() {
        // Get the coordinates of the four points
        Point point1 = getPoint1();
        Point point2 = getPoint2();
        Point point3 = getPoint3();
        Point point4 = getPoint4();

        // Calculate the length and width using the distance formula
        double length = Math.sqrt(Math.pow(point2.getX() - point1.getX(), 2) + Math.pow(point2.getY() - point1.getY(), 2));
        double width = Math.sqrt(Math.pow(point4.getX() - point1.getX(), 2) + Math.pow(point4.getY() - point1.getY(), 2));

        // Calculate the area using the rectangle formula
        return length * width;
    }
}

class Square extends Rectangle {
    // Additional properties and methods specific to Square

    public Square(Point point1, Point point2, Point point3, Point point4) {
        super(point1, point2, point3, point4);
    }

     @Override
    public double calculateArea() {
        // Get the coordinates of the four points
        Point point1 = getPoint1();
        Point point2 = getPoint2();
        Point point3 = getPoint3();
        Point point4 = getPoint4();

        // Calculate the side length using the distance formula (assuming all sides are equal)
        double side = Math.sqrt(Math.pow(point2.getX() - point1.getX(), 2) + Math.pow(point2.getY() - point1.getY(), 2));

        // Calculate the area using the square formula
        return Math.pow(side, 2);
    }
}

public class Main {
    public static void main(String[] args) {
        // Instantiate objects and calculate areas here
        // (Note: You need to replace the Point objects with actual coordinate values.)
        Point pointA = new Point(0, 0);
        Point pointB = new Point(0, 4);
        Point pointC = new Point(3, 4);
        Point pointD = new Point(3, 0);
        /*
        Quadrilateral quadrilateral = new Quadrilateral(pointA, pointB, pointC, pointD);
        System.out.println("Quadrilateral Area: " + quadrilateral.calculateArea());
        */
        Trapezoid trapezoid = new Trapezoid(pointA, pointB, pointC, pointD);
        System.out.println("Trapezoid Area: " + trapezoid.calculateArea());

        Parallelogram parallelogram = new Parallelogram(pointA, pointB, pointC, pointD);
        System.out.println("Parallelogram Area: " + parallelogram.calculateArea());

        Rectangle rectangle = new Rectangle(pointA, pointB, pointC, pointD);
        System.out.println("Rectangle Area: " + rectangle.calculateArea());

        Square square = new Square(pointA, pointB, pointC, pointD);
        System.out.println("Square Area: " + square.calculateArea());
    }
}
