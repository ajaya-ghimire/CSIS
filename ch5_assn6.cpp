#include <iostream>
#include<cmath>
using namespace std;

int main(){
	cout<<"\nWEEKLY PAYROLL REPORT"<<endl;
	cout<<"***********************************"<<endl;
	
	
	double x, l, m, n, a,b, c,jj, grossPay, stateTax, federalTax,fica,netPay, total_gp,total_st, total_ft, total_fica;



	

		for (int i=0;x!=0;i++) {
		cout<<"Enter the employee number: ";
		cin>>x;

		while(x==0 && i==0)
		{
			cout<<"\nThe program is terminated!\n('0' ends the program.)"<<endl;
			return 0;
		}

		while (x==0)
		{
		cout<<"\n================================"<<endl;	
        cout<<"Total Gross pay is $"<<total_gp<<"."<<endl;
        cout<<"Total State Tax is $"<<total_st<<"."<<endl;
        cout<<"Total Federal Tax is $"<<total_ft<<"."<<endl;
        cout<<"Total FICA withholdings is $"<<total_fica<<"."<<endl;
        cout<<"******* The Net Pay is : $"<<netPay<<". **********"<<endl;
        cout<<"Thank you!"<<endl;

			return 0;
		}

		///////////////___INPUT___///////////////////////

		
		cout<<"Enter the gross pay: $";
		cin>>grossPay;
		cout<<"Enter the state tax (%): ";
		cin>>stateTax;
		cout<<"Enter the federal tax (%): ";
		cin>>federalTax;
		cout<<"Enter the FICA withholdings (%): ";
		cin>>fica;
		cout<<"-----------------------------------"<<endl;
		

		cout<<"For Employee "<<x<<": "<<endl;
		cout<<"Gross pay: $"<<grossPay<<endl;
		l=(stateTax/100)*grossPay;
		cout<<"State Tax: $"<<l;
		cout<<endl;
		m=(federalTax/100)*grossPay;
		cout<<"Federal Tax: $"<<m;
		cout<<endl;
		n=(fica/100)*grossPay;
		cout<<"FICA withholdings: $"<<n;
		cout<<endl;
		jj=grossPay-l-m-n;
		cout<<"Net Pay: $"<<jj;
		cout<<endl;
		cout<<"***********************************"<<endl;
		

		
		///////////////___MAIN____///////////////////////
        total_gp+=grossPay;
        total_st+=l;
        total_ft+=m;
        total_fica+=n;
        netPay += jj;


        }
		}
		
		
	



