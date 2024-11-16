#include <iostream>
#include "func.cpp"
#include <string>

#include "func.cpp"
using namespace std;

int main() {
    //input user astrology sign
    string userAnswer;
    cout << "Welcome to AstroKids-- Astrology for Kids!" << endl;
    cout << "Do you know your astrological sign (zodiac sign)? (Yes/No): ";
    
    cin >> userAnswer;
    cout << endl;

    if (userAnswer == "No" || userAnswer == "No"){
        int birthNum = findSign();
        cout << "The number corresponding to your sign is: " << birthNum << endl;
    }
    astrologySign();

    //function that returns a positive message
    //vector of messages, return the value at a vector index
    int num1;


    cout << "Enter number" << endl;
    cin >> num1;
    positiveMessages(num1); 

    //simplistic website for kids who want to learn about the universe
    //stars of each sign
    //little quiz like 16 personality but zodiac

    return 0;
}
