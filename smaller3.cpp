/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 1B

The program takes in three numbers and returns the smallest one.
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Enter the first number: ";
  int num1;
  cin >> num1;
  cout << "Enter the second number: ";
  int num2;
  cin >> num2;
  cout << "Enter the third number: ";
  int num3;
  cin >> num3;
  if(num1 < num2 && num3){
    cout << "The smallest of the three is " << num1;
  } else if(num2 < num1 && num3){
    cout << "The smallest of the three is " << num2;
  } else{
    cout << "The smallest of the three is " << num3;
  }
}
