/*
Author: Zuhayer Tashin
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C

Write a program leap.cpp that asks the user to input an integer representing a year number (1999, 2016, etc.). 
If the input year is a leap year according to the modern Gregorian calendar, 
it should print Leap year, otherwise, print Common year.
*/

#include <iostream>
using namespace std;

int main(){
    int year;   // Declared a variable for the year number
    cout << "Enter year: ";
    cin >> year; // User input for the year number

    if(year % 4 == 0 && year % 100 != 0){

        cout << "Leap year" << endl; // Print leap year when the year is divisible by 4 and not divisible by 100

    }  else if (year % 4 != 0 && year % 100 == 0 || year % 400 != 0){

      cout << "Common Year" << endl; // Print common Year when the year is not divisible by 4 and  divisible by 100 or not divisible by 400

    } else {

        cout << "Leap year" << endl; // Otherwise Prints out leap year

    }

        return 0;
}