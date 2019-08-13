#pragma once

#include "Birthday.hpp"
#include <string>
using namespace std;

class Person {

public:
    Person(string n, Birthday bo);
    void PrintInfo();
    ~Person();

private:
    string name;
    Birthday dateofBirth;
};