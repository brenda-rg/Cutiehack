#include <iostream>
#include "func.h"
#include "date.cpp"

using namespace std;
vector<string> a = {"1", "2", "3"};

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
    if(month == 6 && day > 20 || month == 4 && day < 23) {
        return 4; //Cancer
    }
    if(month == 3 && day > 20 || month == 4 && day < 20) {
        return 5;
    }
    if(month == 3 && day > 20 || month == 4 && day < 20) {
        return 6;
    }
    if(month == 3 && day > 20 || month == 4 && day < 20) {
        return 7;
    }
    if(month == 3 && day > 20 || month == 4 && day < 20) {
        return 8;
    }
    if(month == 3 && day > 20 || month == 4 && day < 20) {
        return 9;
    }
    if(month == 3 && day > 20 || month == 4 && day < 20) {
        return 10;
    }
    if(month == 3 && day > 20 || month == 4 && day < 20) {
        return 11;
    }
    else {
        return 12;
    }






    
}