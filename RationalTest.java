import java.util.Scanner;

public class RationalTest{

	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		int numerator;
		int denominator;
		int digits;
		Rational rational1;
		Rational rational2;
		Rational result;

		System.out.println();
		System.out.println("Rational Operator:");
		

		System.out.print("Enter numerator 1: ");
		numerator = input.nextInt();
		System.out.print("Enter denominator 1: ");
		denominator = input.nextInt();

		rational1 = new Rational(numerator, denominator);

		System.out.print("Enter numerator 2: ");
		numerator = input.nextInt();
		System.out.print("Enter denominator 2: ");
		denominator = input.nextInt();

		rational2 = new Rational(numerator, denominator);

		System.out.print("Enter precision: ");
		digits = input.nextInt();

		System.out.println();
		System.out.println("Enter your Choice: ");

		int choice = getMenuChoice();
		while(choice != 5)
		{
			switch (choice)
			{
				case 1: 
					result = rational1.sum(rational2);
					System.out.printf("a+b = %s = %s%n", result.toString(), result.toFloatString(digits));
					break;
				case 2: 
					result = rational1.subtract(rational2);
					System.out.printf("a-b = %s = %s%n", result.toString(), result.toFloatString(digits));
					break;
				case 3: 
					result = rational1.multiply(rational2);
					System.out.printf("a*b = %s = %s%n", result.toString(), result.toFloatString(digits));
					break;
				case 4: 
					result = rational1.divide(rational2);
					System.out.printf("a/b = %s = %s%n", result.toString(), result.toFloatString(digits));
					break;
			}
				choice = getMenuChoice();
		}
		
	}


		private static int getMenuChoice()
		{
			Scanner input = new Scanner(System.in);
			System.out.println("1. Add");
			System.out.println("2. Subtract");
			System.out.println("3. Multiply");
			System.out.println("4. Divide");
			System.out.println("5. Exit");

			return input.nextInt();
		}
}



