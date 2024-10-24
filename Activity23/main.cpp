#include <iostream>
#include "header.h"

using namespace CustomerNumberValidator;
using namespace std;

int main() {
    
    string customerNumber;

    cout << "Enter customer number: ";
    cin >> customerNumber;

    // Call to Function
    if (CustomerNumberValidator::validateCustomerNumber(customerNumber)) {
        cout << "Valid customer number." << endl;
    } 
    else {
        cout << "Invalid customer number." << endl;
    }

    return 0;
}
