/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 1A

The program takes in two number and returns the smaller one.
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
  if(num1 < num2){
    cout << "The smaller number is " << num1;
  }
  else{
    cout << "The smaller number is " << num2;
  }
}
