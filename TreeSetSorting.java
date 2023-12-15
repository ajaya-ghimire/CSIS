import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class TreeSetSorting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a line of text
        System.out.print("Enter a line of text: ");
        String inputLine = scanner.nextLine();

        // Use split to tokenize the input
        String[] tokens = inputLine.split("\\s+");

        // Place tokens in a TreeSet for sorting
        Set<String> sortedSet = new TreeSet<>();
        for (String token : tokens) {
            sortedSet.add(token);
        }

        // Print the elements of the TreeSet (sorted)
        System.out.println("\nSorted Tokens:");
        for (String element : sortedSet) {
            System.out.println(element);
        }

        scanner.close();
    }
}
