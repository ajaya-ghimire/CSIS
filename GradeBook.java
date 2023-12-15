import java.util.Arrays;
import java.util.stream.IntStream;

public class GradeBook {
    private String courseName;
    private int[][] grades;

    // constructor
    public GradeBook(String courseName, int[][] grades) {
        this.courseName = courseName;
        this.grades = grades;
    }

    // method to set the course name
    public void setCourseName(String courseName) {
        this.courseName = courseName;
    }

    // method to get the course name
    public String getCourseName() {
        return courseName;
    }

    // method to perform various operations on the grades
    public void processGrades() {
        // Display the grades
        System.out.println("Student grades:");

        // Use stream to calculate and display individual averages
        IntStream.range(0, grades.length)
                .forEach(i -> processStudentGrades(i, grades[i]));
    }

    // Method to process grades for a single student
    private void processStudentGrades(int studentNumber, int[] studentGrades) {
        System.out.printf("Student %d: %s%n",
                studentNumber + 1,
                Arrays.toString(studentGrades));

        double average = Arrays.stream(studentGrades)
                               .average()
                               .orElse(0.0);
        System.out.printf("Average: %.2f%n%n", average);
    }
}
