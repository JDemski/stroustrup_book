#include <iostream>

void readStringNumbers(double&, double&);
void writeResult(std::string, double&, double&, double&);
int convertStringToDigit(const std::string& stringDigit);

void calculatorOneDigit(char& charCalc){
    double no_1 {}, no_2 {}, result {};
    
    std::cout << "Podaj znak dzialania: ";
    std::cin >> charCalc;
    
    
    switch (charCalc)
    {
    case '+':
        readStringNumbers(no_1, no_2);
        result = no_1 + no_2;
        writeResult("Suma", no_1, no_2, result);
        break;
    case '-':
        readStringNumbers(no_1, no_2);
        result = no_1 - no_2;
        writeResult("Roznica", no_1, no_2, result);
        break;
    case '*':
        readStringNumbers(no_1, no_2);
        result = no_1 * no_2;
        writeResult("Iloczyn", no_1, no_2, result);
        break;
    case '/':
        readStringNumbers(no_1, no_2);
        if(no_2 != 0){
            result = no_1 / no_2;
            writeResult("Iloraz", no_1, no_2, result);
        }
        else{
            std::cout << "\nNie wolno dzielic przez zero!\n";
        }
        break;
    case 'q':
        break;
        
    default:
        std::cout << "\nNie rozpoznane dzialanie.\n";
        break;
    }
}

void readStringNumbers(double& number_1, double& number_2){
    
    std::string digitString {};
    std::cout << "Podaj pierwsza cyfre: ";
    std::cin >> digitString;
    number_1 = double(convertStringToDigit(digitString));
    
    std::cout << "Podaj druga cyfre: ";
    std::cin >> digitString;
    number_2 = double(convertStringToDigit(digitString));
    
}

void writeResult(std::string charCalculate, int& number_1, int& number_2, int& resultCalc){
    std::cout << "\n" << charCalculate << " liczb " << number_1 << " i " << number_2 << " wynosi " << resultCalc << "\n";
}