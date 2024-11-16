#include <iostream>
#include "func.h"

using namespace std;
vector<string> a = {"1", "2", "3"};

int randomize() {
    int index = rand()%12+1;
    return index;
}