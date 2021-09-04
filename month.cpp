/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 1D

The program takes in a year and a month tells you how many days are in that month for that year.
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Enter year: ";
  int year;
  cin >> year;
  cout << "Enter month: ";
  int month;
  cin >> month;

  bool leap;
  if(year % 4 != 0){
    leap = false;
  }
  else if(year % 100 != 0){
    leap = true;
  }
  else if(year % 400 != 0){
    leap = false;
  }
  else{
    leap = true;
  }

  int days;
  if(month == 2 && leap){
    days = 29;
  }
  else{
    days = 28;
  }

  if(month != 2 && month < 8){
    if(month % 2 == 0){
      days = 30;
    }
    else{
      days = 31;
    }
  }
  
  if(month != 2 && month >= 8){
    if(month % 2 == 0){
      days = 31;
    }
    else {
      days = 30;
    }
  }

  cout << days << " days"; 
}
