#include <iostream>
#include "func.h"
#include <string.h>

using namespace std;

int func() {
    cout << "Welcome to Astro" << endl;

    return 0;
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