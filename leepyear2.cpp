#include<iostream>
#include<string>
using namespace std;
int main( ) {

   string std_name = "Aneesa javed";
  string studentID = "bc240208184";
  int month;
  int user_id_year = 240208184;

  cout << std_name << endl;
  cout << studentID << endl;
  // cout << "Enter the studentID : " << endl;
  // cin >> user_id_year;
  string toString_number = to_string( user_id_year );
  string toString_number2 = toString_number.substr( 3 , 4 );


  int isNumber = stoi( toString_number2 );
  cout << isNumber << endl;

  bool isleepYear = false;


  if ( isNumber % 4 == 0 && isNumber % 100 != 0 || isNumber % 400 == 0 )
    {
    cout << "The year " << isNumber << " is a leap year :" << endl;
    isleepYear = true;

    }
  else {
    cout << "The year " << isNumber << " is a not leap year :" << endl;
    }

  cout << "Enter the month (1-12) , or -1 to stop : ";

  while ( true )
    {
    cin >> month;
    if ( month == -1 )
      {
      break;
      }
    else {



      switch ( month )
        {
          case 1:cout << " Month  1 -Jan has 31 days." << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 2:
            if ( isleepYear )
              {
              cout << " Month  2 - Feb has 29 days." << endl;
                cout << "Enter the month (1-12) , or -1 to stop : ";
              }
            else {
              cout << "Month  2 - Feb has 28 days." << endl;
                cout << "Enter the month (1-12) , or -1 to stop : ";
              }
            break;
          case 3:cout << "Month  3 - March  has 31 days." << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 4:cout << "Month  4 -Apr has 30 days." << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 5:cout << "Month  5 - May has 31 days." << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 6:cout << "Month  6 -Jun has 30 days" << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 7:cout << "Month  7 -jul has 31 days" << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 8:cout << "Month  8 -Aug has 31 days" << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 9:cout << "Month  9 -Sep has 30 days." << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 10:cout << "Month 10 - Oct has 31 days." << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 11:cout << "Month 11 -  Nov has 30 days" << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;
          case 12:cout << "Month 12 -  Dec has 31 days." << endl;
            cout << "Enter the month (1-12) , or -1 to stop : ";
            break;

          default:
            cout << "Invalid month" << endl;
            cout << "Enter the vaild mouth (1-12) ,or -1 to stop : " ;

            break;
        }
      }

    }



  return 0;
  }
