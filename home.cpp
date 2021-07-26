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
            void menu();
             
           

}v;
void vaccine:: menu()
{
    int ch;
    
    cout<<"1)new record \t\t\t\t\t\t   2)Display\n";
    cin>>ch;
    
    switch (ch)
    {
    case 1:
       v.newrecord();
        break;
    case 2:
        v.display();
        break;
    case 3:
        v.login();
        break;
    case 4:
        v.exit();
        break;
    case 5:
        v.search();
    
    default:
    cout<<"Invalid"<<endl;
        break;
    }
}



void vaccine::newrecord()
{
    
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
      cin>>name;
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
      cout<<"Do you want to go to main menu:";
      char var;
      cin>>var;
      if(var=='y')
        v.menu();
    




  /*cout<<"Do you want to continue"<<endl;
  cin>>choice;*/
                                        
  }

  }
  void vaccine::display(){
    cout<<"******Your Information******"<<endl;
    ifstream is;   
   string line;  
   is.open("vaccine.txt");   
   cout << "Reading from a text file:" << endl;   
   while (getline (is,line))  
   {  
   cout << line << endl;  
   }      
   is.close();  
    }

  void vaccine::search(){
      int ch;
      cout<<"\t\t\t\t\t\t\t************VACCINE MANAGEMENT SYSTEM****************"<<endl;
      cout<<"1).Mobile \t\t\t\t\t\t\t\t 2).Adhar Number\n"<<endl;
      cout<<"\n"<<endl;

      cout<<"Enter the way to get  your status"<<endl;
      cin>>ch;

      switch (ch)
      {
      case 1:
      long long int M;
      cout<<"Enter mobile number to be searched:"<<endl;
      cin>>M;

          while(!file.eof()){

              if(v.mobile==M)
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

              if(v.aadhar==A)
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
  bool checkCaptcha(string &captcha, string &user_captcha)
{
    return captcha.compare(user_captcha) == 0;
}
 
// Generates a CAPTCHA of given length
string generateCaptcha(int n)
{
    time_t t;
    srand((unsigned)time(&t));
 
    // Characters to be included
    char *chrs = "abcdefghijklmnopqrstuvwxyzABCDEFGHI"
                  "JKLMNOPQRSTUVWXYZ0123456789";
 
    // Generate n characters from above set and
    // add these characters to captcha.
    string captcha = "";
    while (n--)
        captcha.push_back(chrs[rand()%62]);
 
    return captcha;
}
  void vaccine::login()
  {
      char username[50], password[10];
      cout<<"Enter Username:";
      cin>>username;
      cout<<"\n";
      cout<<"Enter Password:";
      cin>>password;
      cout<<"\n";
      string captcha = generateCaptcha(9);
    cout << captcha;
 
    // Ask user to enter a CAPTCHA
    string usr_captcha;
    cout << "\nEnter above CAPTCHA: ";
    cin >> usr_captcha;
 
    // Notify user about matching status
    if (checkCaptcha(captcha, usr_captcha)){
         system("CLS");
        v.menu();
    }
       
    else
        printf("\nCAPTCHA Not Matched");
 
  }
void vaccine::exit()
{   int val;
    cout<<"THANKYOU"<<endl;
    cout<<"Press 1 to Exit";
    cin>>val;
    if(val==1){
        system("CLS");
     return v.login();
    }
     
    else
        v.exit();
}

    




int main()
{
    vaccine v;
    v.login();
    
    
    
    return 0;
}
