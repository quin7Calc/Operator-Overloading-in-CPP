//
//  genericTypeImp.cpp
//  Chapter 13 Program
//
//  Created by Quintan Calvert on 11/13/22.
//

#include "genericType.hpp"
#include <iostream>
#include <string>

using namespace std;

void genericType::getInformation()
{
    cout << "Enter three different Names sepearated by a single space for the first class instance: ";
    cin >> nameOne >> nameTwo >> nameThree;     // This will store three names in the class instance.
};

void genericType::printInformation()        // This function prints the contents of the class instance.
{
    cout << "The following Names of this Class Instance are: " << endl << endl;
    cout << "Name One: " << nameOne << endl;
    cout << "Name Two: " << nameTwo << endl;
    cout << "Name Three: " << nameThree << endl;
    cout << endl << endl;
    
};

bool genericType::operator==(const genericType& Instance) const // This is the heart of this programming activity. This shows the overloading of the equality operator, which is binary.
{
    
    if ((nameOne == Instance.nameOne) &&        // Control mechanism for comparing class instances. Checks for equality member-wise.
       (nameTwo == Instance.nameTwo) &&
        (nameThree == Instance.nameThree))
        return true;
    else
        return false;
};

genericType::genericType()  // The default constructor
{
    nameOne = "";  // All values default upon construction to null strings.
    nameTwo = "";
    nameThree = "";
};
