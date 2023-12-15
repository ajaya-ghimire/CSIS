public class Date{
	private int day;
	private int month;
	private int year;

	public Date(int d, int m, int y){
		if (d < 32 & d > 0){
			day = d;
		}
		if (m<13 & m>0){
			month = m;
		}
		if (y<9999 & y>1000){
			year = y;
		}
	}

	public void setDay(int x){
		day = x;
	}
	public int getDay(){
		return day;
	}
	public void setMonth(int y){
		month = y;
	}
	public int getMonth(){
		return month;
	}
	public void setYear(int z){
		year = z;
	}
	public int getYear(){
		return year;
	}
	 public void displayDate() {
        System.out.printf("%02d/%02d/%04d%n", month, day, year);
    }




}