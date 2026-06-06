//The Interface
public interface LibraryUser {
    void registerAccount();
    void requestBook();
}
//The KidUser Class
public class KidUser implements LibraryUser {
    int age;
    String bookType;
    public void setAge(int age){
        this.age=age;
    }
    public void setBookType(String bookType){
        this.bookType=bookType;
    }
    @Override
    public void registerAccount(){
        if(age<12){
            System.out.println("You have successfully registered under a Kids Account");
        } else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }
    @Override
    public void requestBook(){
        if("Kids".equals(bookType)){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}
//The AdultUser Class
public class AdultUser implements LibraryUser {
    int age;
    String bookType;
    public void setAge(int age){
        this.age=age;
    }
    public void setBookType(String bookType){
        this.bookType=bookType;
    }
    @Override
    public void registerAccount(){
        if(age>12){
            System.out.println("You have successfully registered under an Adult Account");
        } else{
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }
    @Override
    public void requestBook(){
        if("Fiction".equals(bookType)){
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else{
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}
//The Main Class
public class LibraryInterfaceDemo {
    public static void main(String[] args){
        //For testcase #1
        System.out.println("----- Test case #1: KidUser -----");
        KidUser kid=new KidUser();
        // Testing Age for Kid
        kid.setAge(10);
        kid.registerAccount();
        kid.setAge(18);
        kid.registerAccount();
        // Testing Book Type for Kid
        kid.setBookType("Kids");
        kid.requestBook();
        kid.setBookType("Fiction");
        kid.requestBook();
        //For testcase #2
        System.out.println("\n----- Test case #2: AdultUser -----");
        AdultUser adult=new AdultUser();
        // Testing Age for Adult
        adult.setAge(5);
        adult.registerAccount();
        adult.setAge(23);
        adult.registerAccount();
        // Testing Book Type for Adult
        adult.setBookType("Kids");
        adult.requestBook();
        adult.setBookType("Fiction");
        adult.requestBook();
    }
}
//OUTPUT for Testcase #1
----- Test case #1: KidUser -----
You have successfully registered under a Kids Account
Sorry, Age must be less than 12 to register as a kid
Book Issued successfully, please return the book within 10 days
Oops, you are allowed to take only kids books
//OUTPUT for Testcase #2
----- Test case #2: AdultUser -----
Sorry, Age must be greater than 12 to register as an adult
You have successfully registered under an Adult Account
Oops, you are allowed to take only adult Fiction books
Book Issued successfully, please return the book within 7 days
