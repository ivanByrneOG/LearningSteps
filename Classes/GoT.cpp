#include <iostream>
#include <string>
using namespace std;

class bankAccount
{
public:
    bankAccount(string nm)
    {
        setName(nm);
    }
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};
int main()
{
    bankAccount accountName1("Johaerys");
    bankAccount accountName2("Daenerys");
    cout << accountName1.getName() << endl;
    cout << accountName2.getName() << endl;
    return 0;
}
