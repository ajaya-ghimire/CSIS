import java.util.Formatter;
import java.util.Scanner;
import java.io.FileNotFoundException;

public class SurveyResponseWriter {

    public static void main(String[] args) {
        try (Formatter output = new Formatter("numbers.txt")) {
            Scanner scanner = new Scanner(System.in);

            System.out.println("Enter survey responses (enter -1 to stop):");

            int response;
            while ((response = scanner.nextInt()) != -1) {
                output.format("%d%n", response);
            }

            System.out.println("Survey responses written to numbers.txt.");

        } catch (FileNotFoundException e) {
            System.err.println("Error creating or opening the file.");
            e.printStackTrace();
        }
    }
}
