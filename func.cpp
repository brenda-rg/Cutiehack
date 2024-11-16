#include <iostream>
#include "func.h"
#include "date.cpp"

using namespace std;

int randomize() {
    int index = rand()%12+1;
    return index;
}

int findSign() {
    int month = 0;
    int day = 0;
    Date bday;

    cout << "Please enter your birth month and day as numbers, for example  May 30 would be 5 30" << endl;
    cin >> month >> day;
    while(!bday.isvalid(month,day)) {
        cout << "Date is invalid. Please enter a valid date." << endl;
        cin >> month >> day;
    }

    if(month == 3 && day > 20 || month == 4 && day < 20) {
        return 1; //Aries
    }
    if(month == 4 && day >= 20 || month == 5 && day <= 20) {
        return 2; //Taurus
    }
    if(month == 5 && day > 20 || month == 6 && day <= 20) {
        return 3; //Gemini
    }
    if(month == 6 && day > 20 || month == 7 && day < 23) {
        return 4; //Cancer
    }
    if(month == 7 && day > 22 || month == 8 && day < 23) {
        return 5; //Leo
    }
    if(month == 8 && day > 22 || month == 9 && day < 23) {
        return 6; //Virgo
    }
    if(month == 9 && day > 24 || month == 10 && day < 23) {
        return 7; //Libra
    }
    if(month == 10 && day > 24 || month == 11 && day < 22) {
        return 8; //Scorpio
    }
    if(month == 11 && day > 23 || month == 12 && day < 22) {
        return 9; //Sagittarius
    }
    if(month == 12 && day > 21 || month == 1 && day < 20) {
        return 10; //Capricorn
    }
    if(month == 1 && day > 21 || month == 2 && day < 19) {
        return 11; //Aquarius
    }
    else {
        return 12; //Pisces
    }






    
}