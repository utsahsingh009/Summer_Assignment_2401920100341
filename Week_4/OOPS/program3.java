class Point {
    private int x;
    private int y;

    public Point() {
        this.x = 0;
        this.y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void displayPoint() {
        System.out.println("Point coordinates: (" + x + ", " + y + ")");
    }
}

public class TestPoint {
    public static void main(String[] args) {
        Point p1 = new Point();
        p1.displayPoint();

        Point p2 = new Point(10, 20);
        p2.displayPoint();

        p2.setXY(50, 60);
        p2.displayPoint();
    }
}