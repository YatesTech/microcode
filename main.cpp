/****************************************************************************************
MICRONET 0.1
THIS PROGRAM HAS BEEN HEAVILY NOTED TO ALLOW THE STU--I MEAN THE PEOPLE WHO DON'T KNOW C++ CAN CONTRIBUTE.
IF YOU HAVE QUESTIONS YOU'D LIKE ADDED, MAKE YOUR OWN BRANCH, ADD THEM, AND SEND ME (YatesTech) A PULL REQUEST.
IF YOU DON'T WANT TO DO THAT, JUST POST ON THE PRESBURN FORUM HTTP://WWW.PRESBURN.TK/FORUM/ 
****************************************************************************************/

//Don't mess with the #include and using namespace std.. It'll screw up the program. 
#include <iostream>
#include <string>
using namespace std;

//VARIABLES HERE

//strings are sets of letters, if you need a sentence or a word, use string. Please declare the variable before you use cin. 
string option;
string MicronationName;
string MicronationAge;
string MicronationGovt;
string HeadOfStateGovernment;
string Location;
string WebSite;
string CommunityAssociation;

//Question One in braces
int QuestionOne()
{
  //cout prints out, << puts into stream. stuff in quotes gets printed out, remember endl and semicolon (;)
  cout << "Question one. What is your micronation's name?" << endl;

  cin >> MicronationName;

  /* Forward Declaration - Create one of these, and then you can place the next function below QuestionOne.
     make one with int QuestionWhateverthenumberis(); */
  int QuestionTwo();

  //Run function QuestionTwo
  QuestionTwo();
}

//Second Question

int QuestionTwo()
{
  cout << "When was your micronation created?" << endl;

  cin >> MicronationAge;
  int QuestionThree();
  QuestionThree();
}

int QuestionThree()
{
  cout << "What is your form of government?" << endl;
  cin >> MicronationGovt;
  int QuestionFour();
  QuestionFour();
}

int QuestionFour()
{
  cout << "Who is your Head of State and/or Head of Government?" << endl;
  cin >> HeadOfStateGovernment;
  int QuestionFive();
  QuestionFive();
}
int QuestionFive()
{
  cout << "Where in the world(s) are you located? If you're on Micras, Give us your continent." << endl;
  cin >> Location;
  int QuestionSeven();
  QuestionSeven();
}

int QuestionSeven()
{
  cout << "Where is your website or forum (if you have one, otherwise, you can type N/A)?" << endl; 
  cin >> WebSite;
  int QuestionSix();
  QuestionSix();
}
int QuestionSix()
{
  cout << "What community does your micronation generally associate with? (Micras, hub.mn, micronations.org, etc.) " << endl;
  cin >> CommunityAssociation;
  int ending();
  ending();
}

int main()
{
  cout << "Welcome to MicroCode, a parody of geekcode for micronations. (not based on geekcode source.)." << endl << \
"If you need spaces, please use the underscore (_)." << endl << "Type 1 to create  a MicroCode. " << endl;
  cin >> option;
  if ( option =="1" )
    {
      cout << "Starting microcode..." << endl;
      QuestionOne();
    }
  else
    {
      cout << "Command invalid, try again!" << endl;
      main();
    }

}
/****************************************************************************************
PRINTS YOUR MICROCODE.
WHEN YOU ADD A NEW QUESTION, PLEASE ADD IT HERE. COUT IS VERY BASIC C++ SYNTAX,
SO I AM NOT GOING TO TEACH YOU HOW TO USE IT. LEARN IT YOURSELF. 
 ****************************************************************************************/
int ending()
{
  cout << "-----BEGINNING MICROCODE-----" << " " << endl << "Version 1.0 " << endl << MicronationName <<" " << MicronationAge << " " \
       << MicronationGovt  << " " << HeadOfStateGovernment << endl << Location << " " << WebSite << " " << CommunityAssociation << " " <<\
 endl << "-----ENDING MICROCODE-----" << endl;
  return 0;
}
