//
//  main.cpp
//  Chapter 13 Program
//
//  Created by Quintan Calvert on 11/13/22.
// Program to demonstrate operater overloading. I am keeping this program very simple!

#include <iostream>
#include <string>
#include "genericType.hpp"

using namespace std;

int main() {
    
    // I will create a generic class with generic data for this example.
    // This generic class will have a few data members and functions.
    // Overloading will allow more aggregate operations between classes to take place.

    cout << "We will compare the names or string values in each class instance.";
    cout << "First, let's get these two instances created." << endl << endl;
    
    genericType firstInstance; //  Two instances to be used for comparision.
    genericType secondInstance;
    
    cout << "First Instance: "; // Prompt for and get data strings for first Instance.
    
    firstInstance.getInformation();
    
    cout << "Second Instance: ";  //  Get data for second instance.
    
    secondInstance.getInformation();
    
    if (firstInstance == secondInstance)  // Using the overloaded binary equality comparision operator. The overloaded operator has been programmed to compare the data strings of these two classes member wise, and simplifies the comparision process. This has enabled aggregate operations on these classes Yay!
        cout << "These Instances are the same!"<< endl;
    else
        cout << "These Instances are different." << endl;
    
    return 0;
}
