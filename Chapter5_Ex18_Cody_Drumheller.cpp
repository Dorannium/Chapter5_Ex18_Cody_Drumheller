/*
Title: Chapter 5 Exercise 18 - Population Bar Chart
File Name: Chapter5_Ex18_Cody_Drumheller
Programmer: Cody Drumheller
Date:20241207
Requirements: Write a program that produces a bar chart showing the population growth of Prairieville, 
a small town in the Midwest, at 20-year intervals during the past 100 years. 
The program should read in the population figures (rounded to the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, and 2000 from a file. 
For each year, it should display the date and a bar consisting of one asterisk for each 1,000 people. 
The data can be found in the People.txt file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("People.txt");
    int year, population;

    if (!inputFile) {
        cerr << "Error: Could not open the file People.txt.\n";
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    while (inputFile >> year >> population) {
        cout << year << " ";
        for (int i = 0; i < population / 1000; ++i) {
            cout << "*";
        }
        cout << endl;
    }

    inputFile.close();

    return 0;
}






