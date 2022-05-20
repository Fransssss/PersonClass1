// Title:
// Purpose:
// Author: Fransiskus Agapa
// Have fun - Enjoy the process = Practices make improvement

#include "Person.h"
#include <iostream>

using std::endl;
using std::cout;

int main()
{
    cout << endl;
    Person personOne("Ruth", "1212121212", 24);
    cout << personOne.ToString() << endl;
    cout << personOne.ToString() << endl;
    cout << endl;
    Person personTwo("Losto", "9999999999",12);
    cout << personTwo.ToString() << endl;
    cout << personTwo.ToJson() << endl;
    cout << endl;
    Person personThree("Gomes", "0101010101",12);
    cout << personThree.ToString() << endl;
    cout << personThree.ToJson() << endl;

 return 0; 
}
