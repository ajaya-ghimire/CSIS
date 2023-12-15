import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class PrimeNumberAndFactors {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a whole number
        System.out.print("Enter a whole number: ");
        int number = scanner.nextInt();

        if (isPrime(number)) {
            System.out.println(number + " is a prime number.");
        } else {
            Set<Integer> primeFactors = calculatePrimeFactors(number);

            System.out.println("Prime factors of " + number + ": " + primeFactors);
        }

        scanner.close();
    }

    private static boolean isPrime(int number) {
        if (number <= 1) {
            return false;
        }

        for (int i = 2; i <= Math.sqrt(number); i++) {
            if (number % i == 0) {
                return false; // Not a prime number
            }
        }

        return true; // Prime number
    }

    private static Set<Integer> calculatePrimeFactors(int number) {
        Set<Integer> primeFactors = new HashSet<>();

        for (int i = 2; i <= number; i++) {
            while (number % i == 0) {
                primeFactors.add(i);
                number /= i;
            }
        }

        return primeFactors;
    }
}
