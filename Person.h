//
// Created by XaveF on 5/20/2022.
//

#ifndef PERSONCLASS1_PERSON_H
#define PERSONCLASS1_PERSON_H

#include <iostream>
#include <sstream>

using std::istream;
using std::ostream;
using std::string;

class Person
{
private:
    char* _name;   // no idea how many names would be put
    char _number[11];        // U.S. number 10 digits the 11th for nullptr// or null char
    int _level;            // indicate how close someone is
public:
    Person(const char* nm, const char* num, const int& lev);
    string GetNm() const;
    string GetNum() const;
    int GetLev() const;
    string ToString() const;
    string ToJson() const;
    istream& Read(istream& input);
    ostream& Write(ostream& output) const;
};


#endif //PERSONCLASS1_PERSON_H
