#ifndef __PERSON_H__
#define __PERSON_H__

#include <string>
using namespace std;

struct Person
{
public:
    Person() = default;
    Person(string name, string password);
    void setName(string name);
    void setPassword(string password);
    string getName();
    string getPassword();

private:
    string name;
    string password;
};

#endif // __PERSON_H__