#include "header.h"
#include <string>

namespace CustomerNumberValidator {

    bool validateCustomerNumber(const std::string& customerNumber) {
        // Check if length is 6, else false
        if (customerNumber.length() != 6) {
            return false;
        }

        // Check if first two characters are alphabetical
        if (!isalpha(customerNumber[0]) || !isalpha(customerNumber[1])) {
            return false;
        }

        // Check if last four characters are digits
        for (int i = 2; i < 6; i++) {
            if (!isdigit(customerNumber[i])) {
                return false;
            }
        }

        return true;
    }
}
