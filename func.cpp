#include <iostream>
#include "func.h"
#include <string.h>

using namespace std;

int func() {
    cout << "Welcome to Astro" << endl;

    return 0;
}

void astrologySign (){
    int userNum = 0;
    string userSign;
    cout << "Please enter your astrology sign: (1 being Aries, through 12 being Pisces)" << endl;
    cout << "Enter any number besides 1-12 for the list of star signs and their corresponding number." << endl;

    cin >> userNum;
    while (userNum > 12 || userNum < 1){
        cout << "Invalid number. Please enter a valid number." << endl;
        cin >> userNum;
    }
    if (userNum == 1){
        userSign = "Aries";
    }
    else if (userNum == 2){
        userSign = "Taurus";
    }
    else if (userNum == 3){
        userSign = "Gemini";
    }
    else if (userNum == 4){
        userSign = "Cancer";
    }
    else if (userNum == 5){
        userSign = "Leo";
    }
    else if (userNum == 6){
        userSign = "Virgo";
    }
    else if (userNum == 7){
        userSign = "Libra";
    }
    else if (userNum == 8){
        userSign = "Scorpio";
    }
    else if (userNum == 9){
        userSign = "Sagittarius";
    }
    else if (userNum == 10){
        userSign = "Capricorn";
    }
    else if (userNum == 11){
        userSign = "Aquarius";
    }
    else if (userNum == 12){
        userSign = "Pisces";
    }
    else {
        cout << "Aries = 1" << endl;
        cout << "Taurus = 2" << endl;
        cout << "Gemini = 3" << endl;
        cout << "Cancer = 4" << endl;
        cout << "Leo = 5" << endl;
        cout << "Virgo = 6" << endl;
        cout << "Libra = 7" << endl;
        cout << "Scorpio = 8" << endl;
        cout << "Sagittarius = 9" << endl;
        cout << "Capricorn = 10" << endl;
        cout << "Aquarius = 11" << endl;
        cout << "Pisces = 12" << endl;

        cout << "Please enter your astrology sign (1 - 12):" << endl;

        cin >> userNum;
        while (userNum > 12 || userNum < 1){
            cout << "Invalid number. Please enter a valid number." << endl;
            cin >> userNum;
        }
    }
    cout << "Your astrology sign and corresponding number are: " << userSign << " and " << userNum << "." << endl;
}