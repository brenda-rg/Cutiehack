#include <iostream>
#include "func.cpp"
#include <string>

using namespace std;

int main() {
    //input user astrology sign
    //function that returns a positive message
    //vector of messages, return the value at a vector index
    int num1;


    cout << "Enter number" << endl;
    cin >> num1;
    positiveMessages(num1); 

    return 0;
}
