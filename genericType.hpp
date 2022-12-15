//
//  genericTypeImp.hpp
//  Chapter 13 Program
//
//  Created by Quintan Calvert on 11/13/22.
//

#ifndef genericTypeImp_hpp
#define genericTypeImp_hpp

#include <stdio.h>
#include <string>

using namespace std;

class genericType
{
public:
    
    void printInformation(); // Print function, prints data
    void getInformation(); // Get function, gets data from prompted user input.
    bool operator==(const genericType&) const; // Overload equality binary operator; Is a member function prototype.
    genericType(); //  Default constructor
    
private:
    string nameOne; // Three names is what this class and instances store.
    string nameTwo;
    string nameThree;
};

#endif /* genericTypeImp_hpp */
