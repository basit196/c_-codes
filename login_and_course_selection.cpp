#include <iostream>
#include <array>
using namespace std;

//This function will make sure that we are login or not
bool login(string em, string pass)
{
    bool isLogin = false;
    string user_email, user_pass;
    cout << "Enter your Email" << endl;
    cin >> user_email;
    cout << "Enter your password" << endl;
    cin >> user_pass;
    if (em == user_email && pass == user_pass)
    {

        isLogin = true;
        return isLogin;
    }
    else       
    {

        return isLogin;
    }
}

bool CheckSubject(string subject , string subjects[], int size){
    bool isCorrect=false;
    for (int i = 0; i < size; i++)

    {
       if (subjects[i]==subject)
       {
        isCorrect=true;
        break;
       }
        
    }
    return isCorrect;
}

//This function will print all element of array for us
void display(string arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

//this function will facilitate us for course selection 
void courseSelection(string subjects[], int size)
{
  string courses[6];
  string subject;
  cout<<"Enter your subject name"<<endl;
  int i = 0;
  while ( i <6)
  {
    
    cin>>subject;
    bool isVaild=CheckSubject(subject,subjects,size);
    if (isVaild)
    {
        courses[i]=subject;
        i++;
    }
    else{
        cout<<"Invaild Subject, Enter the vaild subject name "<<endl;

    }
     
  }
  cout<<"This is your registered Courses"<<endl;
  display(courses, size);
  
}

int main()
{
    string email = "za2767651@gmail.com";
    string password = "basitkhan";
    bool isLogin=login(email, password);
    if (isLogin)
    {
        cout << "\t\tWelcome to KCMS" << endl << endl;
        string subjects[10] = {"ENG", "MATH", "URDU", "PAK_STUDY", "ISLAMIAT", "COMMUNICATION", "COMPUTER", "PHILOSOPHY", "STATS", "MANAGEMENT"};
        int size = 10;

        cout << "\t\tAll Subjects" << endl << endl;
        display(subjects, size);

        cout << "\t\tPlease register courses for yourself\n\n";
        courseSelection(subjects, size);  
    }

    else
    {
        cout << "Your email or password is invalid";
    }

    return 0;
}