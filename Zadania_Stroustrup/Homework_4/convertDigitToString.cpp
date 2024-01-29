#include <iostream>
#include <string>
#include <vector>

std::string convertDigitToString(const int& intDigit){
    std::string stringDigit {};
    bool status {};
    std::vector<std::string> tableWordNumbers {"zero", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec"};
    std::vector<std::string> tableStringDigits {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    if(intDigit >= 0 && intDigit <= 9){
        stringDigit = tableWordNumbers[intDigit];
        status = true;
    }
    else{
        std::cout << "\nNie rozpoznalem cyfry\n";
        status = false;
    }
    

    return stringDigit;
}