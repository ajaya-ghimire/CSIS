import java.util.Scanner;

public class Plane{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		boolean[] seats = new boolean[10]; //array of seats

		int firstClass = 0; //next seat available
		int economy = 5; //next available sesat

		while(firstClass<5 || economy<10)
		{
			System.out.println("Please type 1 for Firsrt Class");
		System.out.println("Please type 2 for Economy");
		System.out.println("Choice: ");
		int section = input.nextInt();

			if (section == 1) //user chose first class
			{
				if (firstClass<5)
				{
					seats[firstClass] = true;
					firstClass++;
					System.out.printf("First Class, Seat #%d%n", firstClass);
				}

				else if(economy < 10) // first class is full
				{	
					System.out.println("First Class is full.");
					System.out.println("Would you like to sit in Economy instead?");
					System.out.println("Type 1 if you would sit in Economy or 2 if no. ");
					section = input.nextInt();

					if (section == 1)
					{
						seats[economy] = true;
						economy++;
						System.out.printf("Economy, Seat #%d%n", economy);
					}
					else {
						System.out.println("Next flight leave in 3 hours.");
					}

				}
			}

		else if (section == 2) //user chose economy class
			{
				if (economy<10)
				{
					seats[economy] = true;
					economy++;
					System.out.printf("Economy Class, Seat #%d%n", economy);
				}

				else if(firstClass<5) // first class is full
				{	
					System.out.println("Economy is full.");
					
					System.out.println("Type 1 if you would sit in firstClass or 2 if no. ");
					section = input.nextInt();

					if (section == 1)
					{
						seats[firstClass] = true;
						firstClass++;
						System.out.printf("firstClass, Seat #%d%n", firstClass);
					}
					else {
						System.out.println("Next flight leave in 3 hours.");
					}

				}
			}
		}

		System.out.println("The plane is now full.");

	}
}