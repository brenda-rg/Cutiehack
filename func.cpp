#include <iostream>
#include "func.h"
#include <cstring>
#include "date.cpp"

using namespace std;

int randomize() {
    int index = rand()%12+1;
    return index;
};

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