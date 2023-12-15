import java.security.SecureRandom;
import java.util.stream.IntStream;

public class RandomNumberFilterAndSort {
    public static void main(String[] args) {
        SecureRandom secureRandom = new SecureRandom();

        // Generate a stream of 50 random numbers in the range 1 to 999
        IntStream randomNumbers = secureRandom.ints(50, 1, 1000);

        // Filter the stream to select only the odd numbers
        IntStream oddNumbers = randomNumbers.filter(number -> number % 2 != 0);

        // Display the results in sorted order
        System.out.println("Random odd numbers in sorted order:");
        oddNumbers.sorted().forEach(System.out::println);
    }
}
