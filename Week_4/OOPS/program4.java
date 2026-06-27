class Box {
    double length;
    double breadth;

    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double findArea() {
        return length * breadth;
    }
}

class Box3d extends Box {
    double height;

    public Box3d(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public double findVolume() {
        return findArea() * height;
    }

    public double findSurfaceArea() {
        return 2 * (length * breadth + breadth * height + height * length);
    }
}

public class TestBox {
    public static void main(String[] args) {
        Box3d myBox = new Box3d(5.0, 4.0, 3.0);

        System.out.println("Base Area of the box: " + myBox.findArea());
        System.out.println("Total Surface Area of the 3D box: " + myBox.findSurfaceArea());
        System.out.println("Volume of the 3D box: " + myBox.findVolume());
    }
}