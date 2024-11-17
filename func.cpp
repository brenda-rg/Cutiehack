#include <iostream>
#include <cstring>
#include "date.cpp"
#include <string.h>

using namespace std;

vector<string> funFacts = {
"Many years ago, the Babylonians, an ancient group of people, noticed that Earth encountered the same constellations (a pattern of stars) around the same time every year." ,
"They then noted 12 constellations, known popularly as the zodiac signs. These include Aries, Taurus, Gemini, Cancer, Leo, Virgo, Libra, Scorpio, Sagittarius, Capricorn, Aquarius and Pisces. Each zodiac sign has a specific time period related to it because of the Babylonians." ,
"Astrology is the study of the positioning of the stars, planets, moons, and sun and how it affects everyday life. It is important to remember that astrology is not backed up by science, but many still believe in it." ,
"Astrologists, people who study astrology, believe that based on the day you were born, your personality and future will be affected by it. They look closely at each person\'s zodiac sign, which is determined by which zodiac\'s time period an individual\'s birthday lands on.",
"Aries (March 21 - April 19): Astrologists believe that people born between March 21 - April 19 are stubborn and ambitious. They love to compete and are quick to adapt. ",
"Taurus (April 20 - May 20): Those born on these dates are said to cherish their times of rest greatly. They lean towards more relaxing sounds and spots. ",
"Gemini (May 21 - June 20): Geminis are known to be curious and playful. Their curiosity leads them to be quite ambitious in their goals.", 
"Cancer (June 21 - July 22): Trust is said to be extremely important for people who are born between June 21 - July 22. They are said to be emotional and decide on things based on their gut.", 
"Leo (July 23 - August 22): Leos are loyal and passionate people. Astrologists say they can be quite dramatic and are fiery. Usually, they have the spotlight on them.",
"Virgo (August 23 - September 22): Those whose zodiac sign is Virgo are said to be logical and are realists. They can be quite the perfectionists and get things done.", 
"Libra (September 23 - October 22): Libras are known to value balance and justice. Each Libra\'s definition of balance and justice may be different, but they all work hard to achieve it.", 
"Scorpio (October 23 - November 21): Similar to Cancer, Scorpios are also said to be emotional and tend to follow their gut. However, others\' emotions also affect them, causing them to mature through others\' experiences.",
"Sagittarius (November 22 - December 21): People who are Sagittariuses have many talents. This is said to be because they always have a passion to learn.",
"Capricorn (December 22 - January 19): Capricorn\'s value time and patience. They persevere through hardships and are known to put in a lot of effort.",
"Aquarius (January 20 - February 18): Those who are Aquarius are creative and are ready for change. They wish for the world to be a better place and take action to make it so.", 
"Pisces (February 19 - March 20): Last, but not the least, Pisces are said to be the most sensitive and in touch with other people\'s emotions. They are also the zodiac sign that uses their gut to make decisions the most."};

int randomize() {
    int index = rand()%12+1;
    return index;
}

int randomize2() {
    int index = rand()%16+1;
    return index;
};

void funFact() {
    cout << "Fun Fact!:" << endl <<  funFacts.at(randomize2()-1) << endl;
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

    cout << "Your astrology sign is: " << userSign << "." << endl;
}

void correlatingSign(){
    int userNum = findSign();
    if (userNum == 1){
        cout << "Aries";
    }
    else if (userNum == 2){
        cout << "Taurus";
    }
    else if (userNum == 3){
        cout << "Gemini";
    }
    else if (userNum == 4){
        cout << "Cancer";
    }
    else if (userNum == 5){
        cout << "Leo";
    }
    else if (userNum == 6){
        cout << "Virgo";
    }
    else if (userNum == 7){
        cout << "Libra";
    }
    else if (userNum == 8){
        cout << "Scorpio";
    }
    else if (userNum == 9){
        cout << "Sagittarius";
    }
    else if (userNum == 10){
        cout << "Capricorn";
    }
    else if (userNum == 11){
        cout << "Aquarius";
    }
    else {
        cout << "Pisces";
    }
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
    possibleResults.at(8) = "Your creativity will shine.";
    possibleResults.at(9) = "Remember to be kind to others. ";
    possibleResults.at(10) = "Reach for the stars.";
    possibleResults.at(11) = "Success will come soon.";
    possibleResults.at(12) = "Be proud of yourself.";

    cout << possibleResults.at(num1) << endl;
}