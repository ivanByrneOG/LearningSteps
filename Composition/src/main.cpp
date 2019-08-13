#include "Birthday.hpp"
#include "Person.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Birthday birthObj(10, 5, 1990);
    Person PersonSol("Sol", birthObj);
    PersonSol.PrintInfo();
}