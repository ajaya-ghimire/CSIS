import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class GradeConverter {
    public static void main(String[] args) {
        // Create a Scanner for user input
        Scanner scanner = new Scanner(System.in);

        // Create an ArrayList to store integer grades
        List<Integer> grades = new ArrayList<>();

        // Read integer grades from the user until they enter a non-integer value
        System.out.println("Enter integer grades (enter a non-integer to finish):");
        while (scanner.hasNextInt()) {
            int grade = scanner.nextInt();
            grades.add(grade);
        }

        // Use stream processing to convert each grade to its letter equivalent
        List<String> letterGrades = grades.stream()
                .map(GradeConverter::convertToLetterGrade)
                .collect(Collectors.toList());

        // Display the results
        System.out.println("Letter Grades:");
        for (int i = 0; i < grades.size(); i++) {
            System.out.println("Grade " + grades.get(i) + ": " + letterGrades.get(i));
        }
    }

    // Method to convert an integer grade to its letter equivalent
    private static String convertToLetterGrade(int grade) {
        if (grade >= 90) {
            return "A";
        } else if (grade >= 80) {
            return "B";
        } else if (grade >= 70) {
            return "C";
        } else if (grade >= 60) {
            return "D";
        } else {
            return "F";
        }
    }
}
