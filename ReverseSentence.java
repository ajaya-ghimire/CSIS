import java.util.Scanner;

public class ReverseSentence {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a line of text
        System.out.print("Enter a line of text: ");
        String inputLine = scanner.nextLine();

        // Use split to tokenize the input
        String[] tokens = inputLine.split("\\s+");

        // Output tokens in reverse order
        System.out.println("Reversed Sentence:");

        for (int i = tokens.length - 1; i >= 0; i--) {
            System.out.print(tokens[i] + " ");
        }

        scanner.close();
    }
}
