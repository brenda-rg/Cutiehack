#include <iostream>
#include "func.h"
#include <cstring>
#include "date.cpp"
#include <string.h>

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


void positiveMessages(int num1) {
    vector<string> possibleResults(13);
    possibleResults.at(0) = "You got this!";
    possibleResults.at(1) = "Try something new. It will lead to your success.";
    possibleResults.at(2) = "Today, something will bring a smile to your face. ";
    possibleResults.at(3) = "Take action against anything bothering you. You won't regret it.";
    possibleResults.at(4) = "Your hard work will pay off soon.";
    possibleResults.at(5) = "Continue to work towards your main goal.";
    possibleResults.at(6) = "Stand tall and don't let anything knock you down.";
    possibleResults.at(7) = "Trust yourself and follow your gut. It will come in handy soon.";
    possibleResults.at(8) =  "Your creativity will shine.";
    possibleResults.at(9) = "Remember to be kind to others. ";
    possibleResults.at(10) = "Reach for the stars.";
    possibleResults.at(11) = "Success will come soon.";
    possibleResults.at(12) =  "Be proud of yourself.";

    cout << possibleResults.at(num1) << endl;

    // if (num1 == 0) {
    // result = "You got this!";
    // }
    // else if (num1 == 1) {
    // result = "Try something new. It will lead to your success.";
    // }
    // else if (num1 == 2) {
    // result= "Today, something will bring a smile to your face. ";
    // }
    // else if (num1 == 3) {
    // result = "Take action against anything bothering you. You won't regret it.";
    // }
    // else if (num1 == 4) {
    // result = "Your hard work will pay off soon.";
    // }
    // else if (num1 == 5) {
    // result = "Continue to work towards your main goal.";
    // }
    // else if (num1 == 6) {
    // result = "Stand tall and don't let anything knock you down.";
    // }
    // else if (num1 == 7) {
    // result = "Trust yourself and follow your gut. It will come in handy soon.";
    // }
    // else if (num1 == 8) {
    // result = "Your creativity will shine.";
    // }
    // else if (num1 == 9) {
    // result = "Remember to be kind to others. ";
    // }
    // else if (num1 == 10) {
    // result = "Reach for the stars.";
    // }
    // else if (num1 == 11) {
    // result = "Success will come soon.";
    // }
    // else {
    // result = "Be proud of yourself.";
    // }
    // cout << result << endl;
}