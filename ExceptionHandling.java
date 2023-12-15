// Define ExceptionA as the superclass
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

// Define ExceptionC as a subclass of ExceptionB
class ExceptionC extends ExceptionB {
    ExceptionC(String message) {
        super(message);
    }
}

// Main program to demonstrate catching exceptions
public class ExceptionHandling {
    public static void main(String[] args) {
        try {
            
            throw new ExceptionA("This is ExceptionA");
            //throw new ExceptionB("This is ExceptionB");
            //throw new ExceptionC("This is ExceptionC");

        } catch (ExceptionA exA) {
            System.out.println("Caught ExceptionA: " + exA.getMessage());
        } catch (Exception ex) {
            // This block will catch any other exceptions that are not ExceptionA
            System.out.println("Caught other exceptions: " + ex.getMessage());
        }
    }
}
