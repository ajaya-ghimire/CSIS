import java.util.Scanner;

public class minMax {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int largest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;

        for (int i = 0; i < 5; i++) {
            System.out.print("Enter integer " + (i + 1) + ": ");
           
                int num = scanner.nextInt();
                
                // Update largest and smallest
                if (num > largest) {
                    largest = num;
                }
                if (num < smallest) {
                    smallest = num;
                }
        }

        System.out.println();

        if (largest != Integer.MIN_VALUE && smallest != Integer.MAX_VALUE) {
            System.out.println("Largest integer: " + largest);
            System.out.println("Smallest integer: " + smallest);
            System.out.println();
        } else {
            System.out.println("Error in input. ");
            
        }
    }
}





