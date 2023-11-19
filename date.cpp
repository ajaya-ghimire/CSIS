#include <iostream>
using namespace std;

class date
{
private:
int month, day, year;

public:
    date(int m, int d, int y){
        month = m;
        day = d;
        year = y;
    }

    date(int m, int y){
        month = m;
        day = 0;
        year = y;
    }
    //Default Constructor
    date(){
        month = 0;
        day = 0;
        year = 0;
    }

    void setDate(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }

    void setMonth(int m)
    {
        if (m < 1 || m > 12)
            cout<<"Invalid month value!";
        else
            month = m;
    }
    void setDay(int d)
    {
        day = d;
    }
    void setYear(int y)
    {
        year = y;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    int getYear()
    {
        return year;
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

    int month = 11;
    int day = 10;
    int year = 1970;

    date today;
    today.setDate(month, day, year);
    today.setMonth(month);
    today.displayDate(month, day, year);

    cout<<endl;
    return 0;
}