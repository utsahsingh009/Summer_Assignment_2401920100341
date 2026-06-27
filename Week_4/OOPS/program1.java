// Interface declaration
interface Test {
    void square(int num);
}

class Arithmetic implements Test {
    @Override
    public void square(int num) {
        int result = num * num;
        System.out.println("The square of " + num + " is: " + result);
    }
}

public class ToTestInt {
    public static void main(String[] args) {
        Arithmetic obj = new Arithmetic();
        obj.square(5);
    }
}