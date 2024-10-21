#include <iostream>
#include <string>

using namespace std;
// For this project I need to create a project that has the following: 
// Class
// variable
// Struct or enum
// function
// control structure
// With the following I want to create a project of a real life scenario of a car rental
// where renters would be directed to what level the rented car is located based on the make, model, and year of the car 

enum Level { LEVEL1 = 1, LEVEL2, LEVEL3};

// now we are going to create a class for our rental cars along with the private members
class Car {
    private:
    string make;
    string model;
    int year;
    Level level;

// now we are going to add public members. A public member is accessible from outside the class. 
    public:
        Car(string make, string model, int year) : make(make), model(model), year(year), level {}
        bool assignLevel() {
// we will be working with Toyota, Ford, Honda and they will be assigned accordingly.
            if (make == "Toyota") {
                level = LEVEL1;
                return true;
            } else if (make == "Ford") {
                level = LEVEL2;
                return true;
            } else if (make == "Honda") {
                level = LEVEL3;
                return true;
// we've added all 3 of our make of the cars. we have to expect that the user may type other make that aren't included
// so therefore we must have to add an else statement 
            } else {
                return false;
            }
        }