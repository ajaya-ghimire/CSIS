import java.util.Scanner;

public class TotalSales {
    public static void main(String[] args) {
        System.out.println("Total Sales ");
        // Constants for the number of salespeople and products
        final int NUM_SALESPEOPLE = 4;
        final int NUM_PRODUCTS = 5;

        // Initialize a 2D array to store sales data (4 salespeople x 5 products)
        double[][] sales = new double[NUM_SALESPEOPLE][NUM_PRODUCTS];

        // Create a scanner to read input
        Scanner scanner = new Scanner(System.in);

        // Input data for last month's sales
        for (int i = 0; i < NUM_SALESPEOPLE; i++) {
            for (int j = 0; j < NUM_PRODUCTS; j++) {
                System.out.print("Enter sales for Salesperson " + (i + 1) + ", Product " + (j + 1) + ": ");
                sales[i][j] = scanner.nextDouble();
            }
        }

        // Close the scanner
        scanner.close();

        // Calculate and display total sales by salesperson
        System.out.println("\nTotal Sales by Salesperson:");
        for (int i = 0; i < NUM_SALESPEOPLE; i++) {
            double totalSalesBySalesperson = 0;
            for (int j = 0; j < NUM_PRODUCTS; j++) {
                totalSalesBySalesperson += sales[i][j];
            }
            System.out.println("Salesperson " + (i + 1) + ": $" + totalSalesBySalesperson);
        }

        // Calculate and display total sales by product
        System.out.println("\nTotal Sales by Product:");
        for (int j = 0; j < NUM_PRODUCTS; j++) {
            double totalSalesByProduct = 0;
            for (int i = 0; i < NUM_SALESPEOPLE; i++) {
                totalSalesByProduct += sales[i][j];
            }
            System.out.println("Product " + (j + 1) + ": $" + totalSalesByProduct);
        }

        // Calculate and display cross-total Table
        System.out.println("\nCross-Totals:");
        System.out.print("\t\t");
        for (int i = 0; i < NUM_SALESPEOPLE; i++) {
            System.out.print("\t");
            System.out.print("Salesperson " + (i + 1) + "     ");
        }
        System.out.println("\tTotal");

        for (int j = 0; j < NUM_PRODUCTS; j++) {
            System.out.print("Product " + (j + 1) + "\t");
            for (int i = 0; i < NUM_SALESPEOPLE; i++) {
                System.out.print("\t");
                System.out.print("$" + sales[i][j] + "\t\t");
            }
            
            System.out.print("\t");
            double totalSalesByProduct = 0;
            for (int i = 0; i < NUM_SALESPEOPLE; i++) {
                
                totalSalesByProduct += sales[i][j];
            }
            System.out.println("$" + totalSalesByProduct);
        }

        System.out.print("Total\t\t");

        for (int i = 0; i < NUM_SALESPEOPLE; i++) {
            double totalSalesBySalesperson = 0;
            for (int j = 0; j < NUM_PRODUCTS; j++) {
                totalSalesBySalesperson += sales[i][j];
            }
            System.out.print("\t$"+ totalSalesBySalesperson + "\t\t");
        }
        
        System.out.println("");

        
    }
}
