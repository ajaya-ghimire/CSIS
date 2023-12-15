public class EmployeeTest{

	public static void main(String[] arg)
	{
		System.out.println("Original Employee report");

		//Employee 1
		Employee employee1 = new Employee ("Pablo", "Escobar", 4975.25);
		System.out.printf("First Name: %s%n", employee1.getFirstName());
		System.out.printf("Last Name: %s%n", employee1.getLastName());
		System.out.printf("Monthly Salary: %.2f%n", employee1.getMonthlySalary());
		System.out.printf("Yearly Salary: %.2f%n", employee1.getYearlySalary());
		String temp = "Salary after raise by 10% : ";
		System.out.println(temp + employee1.getRaisedSalary());

		//Employee 2
		Employee employee2 = new Employee ("Don", "Dai", 9841.25);
		System.out.printf("First Name: %s%n", employee2.getFirstName());
		System.out.printf("Last Name: %s%n", employee2.getLastName());
		System.out.printf("Monthly Salary: %.2f%n", employee2.getMonthlySalary());
		System.out.printf("Yearly Salary: %.2f%n", employee2.getYearlySalary());
		String temp1 = "Salary after raise by 10% : ";
		System.out.println(temp1 + employee2.getRaisedSalary());


	}
}
