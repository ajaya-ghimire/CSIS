import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class DuplicateElimination {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Set<String> firstNamesSet = new HashSet<>();

        // Read in a series of first names
        System.out.println("Enter first names (type 'exit' to stop):");
        String input;
        do {
            System.out.print("Enter a first name: ");
            input = scanner.nextLine().trim();

            if (!input.equalsIgnoreCase("exit")) {
                // Add the first name to the set (eliminating duplicates)
                firstNamesSet.add(input);
            }
        } while (!input.equalsIgnoreCase("exit"));

        // Display unique first names
        System.out.println("\nUnique First Names:");
        for (String firstName : firstNamesSet) {
            System.out.println(firstName);
        }

        // Allow the user to search for a first name
        System.out.print("\nEnter a first name to search: ");
        String searchName = scanner.nextLine().trim();

        // Check if the entered name is in the set
        if (firstNamesSet.contains(searchName)) {
            System.out.println(searchName + " is in the set.");
        } else {
            System.out.println(searchName + " is not in the set.");
        }

        scanner.close();
    }
}
