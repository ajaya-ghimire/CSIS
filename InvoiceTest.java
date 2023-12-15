public class InvoiceTest{

public static void main(String[] args)
{
Invoice invoice1 = new Invoice( "1234", "Hammer",2,14.95);

System.out.println("Original Invoice Information");

System.out.printf("Part Number: %s%n",invoice1.getPartNumber());
System.out.printf("Part Description: %s%n",invoice1.getPartDescription());
System.out.printf("Part Quantity: %d%n",invoice1.getQuantity());
System.out.printf("Price: %.2f%n",invoice1.getPricePerItem());
System.out.printf("Invoice Amount: %.2f%n",invoice1.getInvoiceAmount());

invoice1.setPartNumber("001234");
invoice1.setPartDescription("Yellow Hammer");
invoice1.setQuantity(2);

}
}