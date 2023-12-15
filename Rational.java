public class Rational {
    private int numerator;
    private int denominator;

    // Default constructor
    public Rational() {
        this(1, 1); // Calls the parameterized constructor with default values 1/1
    }

    // Parameterized constructor
    public Rational(int numerator, int denominator) {
        this.numerator = numerator; // Initialize numerator
        this.denominator = denominator; // Initialize denominator
        reduce(); // Call the reduce() method to simplify the fraction
    }

    // Private method to reduce the fraction
    private final void reduce() {
        int gcd = 0; // Initialize greatest common divisor to 0
        int smaller;

        smaller = Math.min(numerator, denominator); // Find the smaller of numerator and denominator

        // Find the greatest common divisor (GCD) of numerator and denominator
        for (int divisor = smaller; divisor >= 2; divisor--) {
            if (numerator % divisor == 0 && denominator % divisor == 0) {
                gcd = divisor; // Update the GCD when a common divisor is found
                break; // Stop searching for GCD once one is found
            }
        }

        // If GCD is not 0, simplify the fraction by dividing both numerator and denominator by GCD
        if (gcd != 0) {
            numerator /= gcd;
            denominator /= gcd;
        }
    }

    // Method to perform addition of two Rational numbers
    public Rational sum(Rational right) {
        int resultDenominator = denominator * right.denominator;
        int resultNumerator = numerator * right.denominator + right.numerator * denominator;
        return new Rational(resultNumerator, resultDenominator);
    }

    // Method to perform subtraction of two Rational numbers
    public Rational subtract(Rational right) {
        int resultDenominator = denominator * right.denominator;
        int resultNumerator = numerator * right.denominator - right.numerator * denominator;
        return new Rational(resultNumerator, resultDenominator);
    }

    // Method to perform multiplication of two Rational numbers
    public Rational multiply(Rational right) {
        return new Rational(numerator * right.numerator, denominator * right.denominator);
    }

    // Method to perform division of two Rational numbers
    public Rational divide(Rational right) {
        return new Rational(numerator * right.denominator, denominator * right.numerator);
    }

    // Method to represent the Rational number as a string (e.g., "2/3")
    public String toString() {
        return numerator + "/" + denominator;
    }

    // Method to represent the Rational number as a floating-point string with a specified number of digits
    public String toFloatString(int digits) {
        double value = (double) numerator / denominator;
        return String.format("%." + digits + "f", value);
    }
}
