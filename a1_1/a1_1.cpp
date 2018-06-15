//
//  main.cpp
//  a1_1
//
//  Created by Dan Sajjad on 6/13/18.
//  Copyright © 2018 Dan Sajjad. All rights reserved.
//

//The date June 10, 1960 is special because when we write it in the following format, the month times the day equals the year: 6/10/60
//Write a program that asks the user to enter a date in the format specified above (month/day/2-digit-year). The program should then determine whether the month times the day is equal to the year. If so, it should display a message saying the date is magic. Otherwise it should display a message saying the date is not magic.

#include <iostream>
using namespace std;

int main() {
    string userInput;
    string output;
    int month;
    int day;
    int year;
    
    // Ask the user to enter a date in the format specified above (month/day/2-digit-year)
    cout << "Please enter date in format MM/DD/YY\n";
    cin >> userInput;

    // Find the index of the slashes
    int firstSlash = userInput.find("/");
    int secondSlash = userInput.find("/", firstSlash + 1);
    
    // Slice and convert sliced strings to integers
    month = stoi(userInput.substr(0, firstSlash));
    day = stoi(userInput.substr(firstSlash + 1, secondSlash - firstSlash - 1));
    year = stoi(userInput.substr(secondSlash + 1, 2));
    
    // if month * day === year print date is magic
    // else print date is not magic
    output = (month * day == year) ? "date is magic" : "date is not magic";
    cout << output << endl;
}

// OUTPUT
//Please enter date in format MM/DD/YY
//5/3/15
//date is magic
//Program ended with exit code: 0
