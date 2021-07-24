#include<iostream>
#include<fstream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
 

class vaccine{

    private:
            char name[50],city[50];
            char dob[10],gender;
            int  age,  no_of_doses;
            long long int mobile,aadhar;
    public:
            void newrecord();
            void login();
            void vaccine_available();
            void search();
            void exit();
           

};
void vaccine::newrecord()
{
    cout<<"\t\t\t\t\t\t\t********VACCINE REGISTRATION SYSTEM***********"<<endl;
    cout<<"New Registration________"<<endl;
    ofstream file("vaccine.txt");
    if(!file.is_open())
  {
      cout<<"ERROR"<<endl;
  }
  else
  {
      cout<<"\t\t\t\t\t\t\t************VACCINE MANAGEMENT SYSTEM****************"<<endl;

      cout<<"New Registration"<<endl;
      cout<<"Enter Name:";
      cin.getline(name,50);
      file<<name<<endl;
      cout<<"\n"<<endl;
      cout<<"Enter Aadhar Number:";
      cin>>aadhar;
      file<<aadhar<<endl;
      cout<<"\n"<<endl;
      cout<<"Enter City:";
      cin>>city;
      
      file<<city<<endl;
      cout<<"\n"<<endl;
      cout<<"Enter Date of Birth:";
      cin>>dob;
      file<<dob<<endl;
      cout<<"\n"<<endl;
      cout<<"Enter Age:";
      cin>>age;
      file<<age<<endl;
      cout<<"\n"<<endl;
      cout<<"Enter Gender:";
      cin>>gender;
      file<<gender<<endl;
      cout<<"\n"<<endl;
      cout<<"Enter Mobile Number:";
      cin>>mobile;
      file<<mobile<<endl;
      cout<<"\n"<<endl;
      cout<<"No. of Doses Taken:";
      cin>>no_of_doses;
      file<<no_of_doses<<endl;




                                        
  }
   
    

}


int main()
{
    vaccine v;
    v.newrecord();
    return 0;
}