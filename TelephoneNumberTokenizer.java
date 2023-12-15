import java.util.Scanner;

public class TelephoneNumberTokenizer {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input a telephone number
        System.out.print("Enter a telephone number in the format (555) 555-5555: ");
        String phoneNumber = scanner.nextLine();

        // Use split to tokenize the input
        String[] tokens = phoneNumber.split("[()\\s-]+");

        // Extract area code, first three digits, and last four digits
        String areaCode = tokens[1];
        String firstThreeDigits = tokens[2];
        String lastFourDigits = tokens[3];

        // Concatenate the seven digits into one string
        String fullPhoneNumber = areaCode + firstThreeDigits + lastFourDigits;

        // Print the results
        System.out.println("Area Code: " + areaCode);
        System.out.println("Phone Number: " + fullPhoneNumber);

        scanner.close();
    }
}
