import java.io.IOException;

// Define ExceptionA as a subclass of Exception
class ExceptionA extends Exception {
    ExceptionA(String message) {
        super(message);
    }
}

// Define ExceptionB as a subclass of ExceptionA
class ExceptionB extends ExceptionA {
    ExceptionB(String message) {
        super(message);
    }
}

// Main program to demonstrate catching exceptions
public class CatchingException {
    public static void main(String[] args) {
        try {
            // Uncomment each line below to see different catch scenarios
            
            // throw new ExceptionA("This is ExceptionA");
            // throw new ExceptionB("This is ExceptionB");
             throw new NullPointerException("This is a NullPointerException");
            // throw new IOException("This is an IOException");

        } catch (Exception exception) {
            System.out.println("Caught Exception: " + exception.getMessage());
        }
    }
}
