class SomeClass {
    // Constructor that throws an exception
    SomeClass() throws Exception {
        // Simulate a condition that leads to constructor failure
        throw new Exception("Constructor of SomeClass has failed.");
    }
}

public class ConstructorFailure {
    public static void main(String[] args) {
        try {
            // Attempt to create an object of type SomeClass
            SomeClass someObject = new SomeClass();
        } catch (Exception exception) {
            // Catch and handle the exception thrown from the constructor
            System.out.println("Exception caught: " + exception.getMessage());
        }
    }
}
