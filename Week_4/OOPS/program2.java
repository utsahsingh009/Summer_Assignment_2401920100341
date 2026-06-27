class Outer {
    void display() {
        System.out.println("This is the display method of Outer class.");
    }
    class Inner {
        void display() {
            System.out.println("This is the display method of Inner class.");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Outer outerObj = new Outer();
        outerObj.display();

        Outer.Inner innerObj = outerObj.new Inner();
        innerObj.display();
    }
}