#include <iostream>
using namespace std;

class car {
	private:
	int yearModel, speed;
	string make;

	public:
	car (int yr, int s, string m) {
		yearModel = yr;
		speed = s;
		make = m;
	}

	//Constructor Overloading
	car (int yr, string m){
		yearModel = yr;
		speed = 0;
		make = m;
	}
	
	void accelerate(int s){
		for (int i=1;i<6;i++){
			s=s+5;
		cout<<"After accelerating "<<i<<" time, speed is "<<s<<".\n";
		}	
	}

	void brake(int u){
		for (int j=1;j<6;j++){
			u=u-5;
		cout<<"After braking "<<j<<" time, speed is "<<u<<".\n";
		}
	}
	
	
	string carFunction (){

		string yearS = to_string(yearModel);
		string speedS = to_string(speed);
		string x= "Year Model: " +yearS+ "\nCurrent Speed: " +speedS+ "\nMake: " +make+ "\n";
		return x;
	}
	
};



int main ()
{
	cout<<"\nCar Class"<<endl;

	int year =2008;
	int spd = 90;
	string mk = "Honda";
	car myCar(year, spd, mk);

	myCar.accelerate(spd);

	cout<<endl;
	
	myCar.brake(spd);
		
	cout<<endl;

	cout<<myCar.carFunction()<<endl;

	return 0;


}