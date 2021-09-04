/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 1C

The program takes in a year and tells you if the year is a leap or common year.
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Enter year: ";
  int year;
  cin >> year;
  if(year % 4 != 0){
    cout << "Common year";
  }
  else if(year % 100 != 0){
    cout << "Leap year";
  }
  else if(year % 400 != 0){
    cout << "Common year";
  }
  else{
    cout << "Leap year";
  }
}
