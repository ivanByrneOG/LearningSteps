#include "Birthday.hpp"
#include <iostream>
using namespace std;

Birthday::Birthday(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
void Birthday::PrintDate()
{
    cout << day << "/" << month << "/" << year << endl;
}

Birthday::~Birthday()
{
}
