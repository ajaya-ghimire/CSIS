import java.util.Scanner;
import java.util.Formatter;
import java.io.File;
import java.io.FileNotFoundException;

public class SurveyResponseReader {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(new File("numbers.txt"));
             Formatter output = new Formatter("output.txt")) {

            int[] frequency = new int[6]; // array of frequency counters

            // for each answer, use value as frequency index to determine element to increment
            while (input.hasNext()) {
                int answer = input.nextInt();

                try {
                    ++frequency[answer];
                } catch (ArrayIndexOutOfBoundsException e) {
                    System.out.println(e); // invokes toString method
                    System.out.printf("Invalid response: %d%n", answer);
                }
            }

            output.format("%s%10s%n", "Rating", "Frequency");

            // output each array element's value
            for (int rating = 1; rating < frequency.length; rating++) {
                output.format("%6d%10d%n", rating, frequency[rating]);
            }

            System.out.println("Survey results written to output.txt.");

        } catch (FileNotFoundException e) {
            System.err.println("Error opening the file.");
            e.printStackTrace();
        }
    }
}
