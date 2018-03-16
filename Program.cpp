#include <iostream>
#include <sstream>
#include "Converter.h"

int main() {

    using namespace std;

    bool originalTemperatureC = false;
    string choice;
    string tempEntered;
    double temp;
    char origin;

    std::cout << "What is the original temperature in? (Please enter 'c' or 'f'): ";

    getline(cin, choice);
    stringstream choiceEntered(choice);
    choiceEntered >> origin;

    if ((origin == 'c') || (origin == 'C')) {
        originalTemperatureC = true;
    } 

    if (origin != 'c') {
        if (origin != 'C'){
            if  (origin != 'f') {
                if (origin != 'F'){
                    cout << "Invalid choice entered! Exiting program!" << endl;
                    return -1;
                }
            }
        }
    }


    cout << "Please enter a temperature to be converted: ";
    getline(cin, tempEntered);

    stringstream baseResult(tempEntered);
    baseResult >> temp;

    if (originalTemperatureC){
        cout << "The converted temperature is " << ctof(temp) << "F." << endl;
    } else {
        cout << "The converted temperature is " << ftoc(temp) << "C." << endl;
    }
    
    return 0;
}