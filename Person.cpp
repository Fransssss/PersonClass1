//
// Created by XaveF on 5/20/2022.
//

#include "Person.h"
#include <cstring>      // to use cstring functions
#include <iostream>
#include <sstream>

using std::stringstream;
using std::string;

Person::Person(const char *nm, const char *num, const int& lev)
{
    // _name is pointer to char, we should set space before assigning value
    _name = new char [strlen(nm)+1];   // remember type _name is char so allocate space with the same type
    strcpy(_name, nm);        // after we set space then we can assign value in _name
    strcpy(_number, num);       // number has allocated spaces already
    _level = lev;
}

string Person::GetNm() const
{
    return string(_name);
}

string Person::GetNum() const
{
    return string(_number);
}

int Person::GetLev() const
{
    return _level;
}

string Person::ToString() const
{
    stringstream ts;
    ts << "Name: " << string(_name) << ", Number: " << string(_number) << ", Level: "
       << _level;
    return ts.str();
}

string Person::ToJson() const
{
    stringstream tj;
    tj << "\"Name\":\"" << string(_name) << ", \"Number\":\"" << _number << ", \"Level\": "
    << _level;
    return tj.str();
}

istream& Person::Read(istream& input)
{
    return input;
}

ostream& Person::Write(ostream& output) const
{
    return output;
}
