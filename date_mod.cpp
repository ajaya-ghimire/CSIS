#include <iostream>
using namespace std;

class date{
        private:
                int month, monthX,month1, year1, day, year;
        public:
                date (int m, int d, int y) {
                        month = m;
                        day = d;
                        year = y;
                }
                //Default Constructor
                date (){
                        month = 0;
                        day = 0;
                        year = 0;
                }

        void checkDate (int a,int b, int c)
        {
                if (a <1 || a>12){
                        cout<<"ERROR: Month should be between 1 to 12!"<<endl;          
                }
                if (b<1 || b>31){
                        cout<<"ERROR: Day should be between 1 to 31!"<<endl;            
                }
        }
        

        void addDay (int n){
                day += n;        
        }
        void addMonth (int nn){
                month += nn;
        }
        int retnDay(){
                return day;
        }
        int retnMonth(){
                return month;
        }

        //Change month after day addition/sub
        // X
        int mod_m (int monthX, int dayY){   
                
                if (dayY>31){
                        monthX = monthX + 1;  
                }
                int month_d = monthX;


                if (month_d>12){
                        month_d = month_d-12;
                }

                return month_d;
                        }

        int mod_d (int monthX, int dayY){
                if (dayY>31){
                        dayY = dayY -31;
                }
                return dayY;
        }

       
        int mod_y(int monthX, int dayY,int yearX){
                int year1;
                if (monthX>12 && dayY<31)
                {
                        year1 = yearX + 1;
                }

                if (monthX>=12 && dayY>31){
                        year1 = yearX + 1;
                }
                return year1;
        }


        void displayDate (int a2, int b2, int c2)
        {
                if (a2>=1 && a2<=12 && b2>=1 && b2<=31){
                        string s= to_string(a2);
                        string t= to_string(b2);
                        string u= to_string(c2);
                        string x1 = s + "/" +t+ "/"+u;
                        cout<<x1<<endl;
                string mth;
                switch (a2)
                {
                        case 1:
                        mth = "January";
                        break;
                        case 2:
                        mth = "February";
                        break;
                        case 3:
                        mth = "March";
                        break;
                        case 4:
                        mth = "April";
                        break;
                        case 5:
                        mth = "May";
                        break;
                        case 6:
                        mth = "June";
                        break;
                        case 7:
                        mth = "July";
                        break;
                        case 8:
                        mth = "August";
                        break;
                        case 9:
                        mth = "September";
                        break;
                        case 10:
                        mth = "October";
                        break;
                        case 11:
                        mth = "November";
                        break;
                        case 12:
                        mth = "December";
                        break;
                }
                string x2 = mth + " " +t+ ", "+u;
                string x3 = t+" "+mth+" "+u;
                        cout<<x2<<endl<<x3<<endl;
                }
        }
};

int main()
{
        cout<<endl;

        //Assigning intial Values
        int month = 10;
        int day = 30;
        int year =2018;
        //Addition or subtraction factor
        int ad_month = 2;
        int ad_day = 3;
        

        cout<<"Today:"<<endl;
        
        //Declaration
        date today (month,day,year);
        today.checkDate(month,day,year);

        //Initial Date
        today.displayDate(month,day,year);
        cout<<endl;

        //Addition
        cout<<"Days sub/added: "<<ad_day<<endl;
        cout<<"Month sub/addded: "<<ad_month<<endl;
        cout<<endl;

        //Date after addition or subtraction
        cout<<"The other Day:"<<endl;
        today.addDay(ad_day);
        today.addMonth(ad_month);

        int x=today.retnMonth();
        int y=today.retnDay();

        int x1=today.mod_m(x,y);  
        int d= today.mod_d(x,y); 
        int y1=today.mod_y(x,y,year);
        today.displayDate(x1,d,y1);
        cout<<endl;

}