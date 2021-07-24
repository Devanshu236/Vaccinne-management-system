#include<iostream>
#include<fstream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
char choice;
ofstream file("vaccine.txt");
 

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
            void display();
             
           

}V;

void vaccine::display(){
    cout<<"******Your Information******"<<endl;
    fstream file;
    file.open("vaccine.txt",ios::in);
    if(!file){
        cout<<"Error"<<endl;
    }
    else{
        char ch;
        while(!file.eof()){
            file<<ch<<endl;
            cout<<ch;
        }
        file.close();
        }
    }

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





  /*cout<<"Do you want to continue"<<endl;
  cin>>choice;*/
                                        
  }

  }

  void vaccine::search(){
      cout<<"\t\t\t\t\t\t\t************VACCINE MANAGEMENT SYSTEM****************"<<endl;
      cout<<"1).Mobile \t\t\t\t\t\t\t\t 2).Adhar Number\n"<<endl;
      cout<<"\n"<<endl;
      cout<<"Enter the way to get  your status"<<endl;
      cin>>choice;

      switch (choice)
      {
      case 1:
      long long int M;
      cout<<"Enter mobile number to be searched:"<<endl;
      cin>>M;

          while(!file.eof()){

              if(V.mobile==M)
              //we'll call here our display function
              display();

              else
              cout<<"Record not found\n"<<endl;
             
          }
          break;
          case 2:
      long long int A;
      cout<<"Enter aadhar number to be searched:"<<endl;
      cin>>M;

          while(!file.eof()){

              if(V.aadhar==A)
              //we'll call here our display function
              display();

              else
              cout<<"Record not found\n"<<endl;
             
          }
          break;


          
      
      default:
      cout<<"Invalid choice\n"<<endl;
          break;
      }


    


  }
   
    




int main()
{
    vaccine v;
    int ch;
    
    cout<<"1)new record \t\t\t\t\t\t   2)Display\n";
    cin>>ch;
    
    switch (ch)
    {
    case 1:
        /* code */v.newrecord();
        break;
    case 2:
        v.display();
        break;
    
    default:
    cout<<"Invalid"<<endl;
        break;
    }
    
    
    return 0;
}
