#include <iostream>
#include "func.cpp"
#include <string>

using namespace std;

int main() {
    //input user astrology sign
    int num1;
    cout << "Welcome to AstroKids-- Astrology for Kids!" << endl;
    cout << "Enter your birthday for your astrology sign: ";
    
    int birthNum = findSign();
    cout << "The number corresponding to your sign is: " << birthNum << endl;
    
    astrologySign();
    cout << endl;

    //function that returns a positive message
    cout << "Here is a message you should hear for your astrological sign:" << endl;
    positiveMessages(randomize()); 

    do {
        cout << "Enter any number to get a fun fact or -1 to exit" << endl;
        cin >> num1;
        if(num1 != -1) {
            funFact();
        }
    } while(num1 != -1);

    //simplistic website for kids who want to learn about the universe
    //stars of each sign
    //little quiz like 16 personality but zodiac

    return 0;
}
