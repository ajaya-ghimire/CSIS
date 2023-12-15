public class RethrowingExceptions {

    // Method that initially throws an exception
    static void someMethod2() throws Exception {
        System.out.println("someMethod2 is throwing an exception.");
        throw new Exception("Exception thrown from someMethod2.");
    }

    // Method that calls someMethod2, catches the exception, and rethrows it
    static void someMethod() throws Exception {
        try {
            someMethod2();
        } catch (Exception originalException) {
            System.out.println("someMethod caught an exception and rethrowing it.");
            throw originalException;
        }
    }

    public static void main(String[] args) {
        try {
            // Call someMethod from main and catch the rethrown exception
            someMethod();
        } catch (Exception rethrownException) {
            // Print the stack trace of the rethrown exception
            System.out.println("Exception caught in main:");
            rethrownException.printStackTrace();
        }
    }
}
