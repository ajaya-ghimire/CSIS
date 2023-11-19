#include<iostream>

using namespace std;

struct speaker
{

    string name;
    string telephoneNumber;
    string topic;
    int fee;
};
int main()
{

struct speaker s[5];

char choice;

do
{
    cout<<"1: Enter the array of 5 speakers"<<endl;
    cout<<"2: List all the data srored in the strucures"<<endl;
    cout<<"3: Exit"<<endl;

    cout<<"\nEnter your choice: ";

    cin>>choice;

    switch(choice)
    {

        case '1':
            {

                for(int i=0;i<5;i++)
                {
                    cout<<"\nEnter the details of speaker "<<i+1<<endl;

                    while(1)
                    {

                        cout<<"Enter name: ";

                        getline(cin,s[i].name);

                        if(!s[i].name.empty())
                            break;
                    }

                    while(1)
                    {

                        cout<<"Enter telephone number: ";

                        getline(cin,s[i].telephoneNumber);

                        if(!s[i].telephoneNumber.empty())
                            break;
                    }

                    while(1)
                    {

                        cout<<"Enter topic: ";

                        getline(cin,s[i].topic);

                        if(!s[i].topic.empty())
                            break;
                    }

                    while(1)
                    {

                        cout<<"Enter fees: ";

                        cin>>s[i].fee;

                        if(s[i].fee>=0)
                            break;
                    }

                }

            }
            break;


        case '2':
            {
                cout<<"Displaying speker's information.. "<<endl;

                for(int i=0;i<5;i++)
                {

                    cout<<"\nSpeaker "<<i+1<<" information.."<<endl;
                    cout<<"Name: "<<s[i].name<<endl;
                    cout<<"Telephone number: "<<s[i].telephoneNumber<<endl;
                    cout<<"Topic: "<<s[i].topic<<endl;
                    cout<<"Fee: "<<s[i].fee<<endl;
                }
            }
            break;

        case '3':
            break;
    }
}while(choice!='3');

}
