#include <iostream>
#include <string>
#include <vector>

int convertStringToDigit(const std::string& stringDigit){
    int digit {};
    bool status {true};
    std::vector<std::string> tableWordNumbers {"zero", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec"};
    std::vector<std::string> tableStringDigits {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    for(int i = 0; i < 10; ++i){
            if(stringDigit == tableWordNumbers[i] || stringDigit == tableStringDigits[i]){
                digit = i;
                status = false;
            }           
        }
        if(status){
            std::cout << "\nNie rozpoznalem cyfry!\n";
        }
    

    return digit;
}