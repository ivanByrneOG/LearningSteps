#include "Person.hpp"
#include "Birthday.hpp"
#include <iostream>
using namespace std;

Person::Person(string n, Birthday bo)
    : name(n)
    , dateofBirth(bo)
{
}
void Person::PrintInfo()
{
    cout << name << " was born on ";
    dateofBirth.PrintDate();
}
Person::~Person()
{
}