#include <iostream>
#include "func.cpp"
#include <string>

using namespace std;

int main() {
    //input user astrology sign
    cout << "Welcome to AstroKids-- Astrology for Kids!" << endl;
    cout << "Enter your birthday for your astrology sign: ";
    
    int birthNum = findSign();
    cout << "The number corresponding to your sign is: " << birthNum << endl;
    
    astrologySign();
    cout << endl;

    //function that returns a positive message
    cout << "Here is a message you should hear for your astrological sign:" << endl;
    positiveMessages(randomize()); 

    cout << "Would you like to learn more about your astrological sign? (Yes/No)";
    string userQ1Answer;
    string userQ2Answer;
    
    cin >> userQ1Answer;
    cout << endl;
    if (userQ1Answer == "No" || userQ1Answer == "no"){
        cout << "Are you sure? You can see how similar you are to your sign's common traits! :) (Yes/No)";
        cin >> userQ2Answer;
        cout << endl;
        if (userQ2Answer == "Yes" || userQ2Answer == "yes"){
            cout << "Bummer :(" << endl;
        }
    }
    else {
        cout << " Traits: " << endl;
    }

    //simplistic website for kids who want to learn about the universe
    //stars of each sign
    //little quiz like 16 personality but zodiac

    return 0;
}
