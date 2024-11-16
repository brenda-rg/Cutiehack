#include "date.h"
#include "iostream"
using namespace std;

bool Date::isvalid(int month, int day) {
    map<int,int> dates;
    dates.insert(std::pair<int,int>(1,31));
    dates.insert(std::pair<int,int>(2,29));
    dates.insert(std::pair<int,int>(3,31));
    dates.insert(std::pair<int,int>(4,30));
    dates.insert(std::pair<int,int>(5,31));
    dates.insert(std::pair<int,int>(6,30));
    dates.insert(std::pair<int,int>(7,31));
    dates.insert(std::pair<int,int>(8,31));
    dates.insert(std::pair<int,int>(9,30));
    dates.insert(std::pair<int,int>(10,31));
    dates.insert(std::pair<int,int>(11,30));
    dates.insert(std::pair<int,int>(12,31));

    if(!dates.count(month)) {
        return false;
    }
    else {
        if(day > dates.at(month) || day < 0) {
            return false;
        }
    }
    return true;
}