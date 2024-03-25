#include "Person.h"

Person::Person(string name, string password) : name{name}, password{password}
{
}

void Person::setName(string name)
{
    this->name = name;
}
void Person::setPassword(string password)
{
    this->password = password;
}

string Person::getName()
{
    return this->name;
}

string Person::getPassword()
{
    return this->password;
}
