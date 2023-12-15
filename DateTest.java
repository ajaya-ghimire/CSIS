public class DateTest{
    public static void main(String[] args) {
        // Create a Date object and initialize it
        Date myDate = new Date(10, 11, 2003);

        // Display the date using the displayDate method
        System.out.print("Date: ");
        myDate.displayDate();

        // Change the date using the setter methods
        myDate.setMonth(12);
        myDate.setDay(25);
        myDate.setYear(2024);

        // Display the updated date
        System.out.print("Updated Date: ");
        myDate.displayDate();
    }
}
