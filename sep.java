import java.util.Scanner;

public class sep{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in); //Declare scanner

		System.out.print("Enter a 5 digit number: ");
		String num = scan.next();
		int len = num.length();

		if (len != 5){
			System.out.println("Please enter 5 digit number.");
		}
		else{
		//System.out.println(len);	
			for (int i = 0; i<5 ; i++ ){
				System.out.print(num.charAt(i)+" ");
			}
		}
		
	}
}