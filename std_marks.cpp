#include <iostream>
#include <string>
using namespace std;
int main()
{

  string std_name = "Aneesa javed";
  string studentID = "bc240208184";
  int month;

  double average_marks;
  int total_marks = 0;
  int std_number, highest_marks = INT16_MIN, lowest_marks = INT16_MAX;
  cout << "Student id : " << std_name << endl
       << "Student name : " << studentID << endl;

  int i = 1;
  while (i <= 3)
  {
    cout << "Enter marks for subjects " << i << " : ";
    cin >> std_number;
    while (std_number > 100 || std_number < 0)
    {
      cout << "Invalid Marks try again b/w 0 and 100 " << i << " : ";
      cin >> std_number;
    }
    total_marks += std_number;
    i++;
    if (std_number < lowest_marks)
    {
      lowest_marks = std_number;
    }
    if (std_number > highest_marks)
    {
      highest_marks = std_number;
    }
  }
  cout << "Marks have been Entered Here is your result " << endl;
  cout << "Obtained marks Out of 300 : " << total_marks << endl;
  average_marks = total_marks / 3.0;
  cout << "Average Marks : " << average_marks << " %" << endl;

  if (average_marks >= 90)
  {
    cout << " Grade : A " << endl;
  }
  else if (average_marks >= 80)
  {
    cout << "Grade : B " << endl;
  }
  else if (average_marks >= 70)
  {
    cout << " Grade : C " << endl;
  }
  else if (average_marks >= 60)
  {
    cout << "Grade : D" << endl;
  }
  else if (average_marks < 60)
  {
    cout << "Grade : F" << endl;
  }
  cout << "Highest marks : " << highest_marks << endl;
  cout << "Lowest  marks : " << lowest_marks << endl;
  return 0;
}
