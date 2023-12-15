import java.util.Scanner;

public class comparison{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in); // Creates scanner object

		System.out.print("Enter first integer: ");
		int a = scan.nextInt(); //Read 1st user input
		System.out.print("Enter the second number: ");
		int b = scan.nextInt(); // Read 2nd user input

		if(a>b){
			System.out.println(a + " is larger. ");
		}
		else if(b>a){
		System.out.println(b + " is larger. ");	
		}
		else{
			System.out.println("These numbers are equal. ");
		}

	}
}