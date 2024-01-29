#include <iostream>

void readNumbers(double&, double&);
void writeResult(std::string, double&, double&, double&);

void calculator(char& charCalc){
    double no_1 {}, no_2 {}, result {};
    
    std::cout << "Podaj znak dzialania: ";
    std::cin >> charCalc;
    
    
    switch (charCalc)
    {
    case '+':
        readNumbers(no_1, no_2);
        result = no_1 + no_2;
        writeResult("Suma", no_1, no_2, result);
        break;
    case '-':
        readNumbers(no_1, no_2);
        result = no_1 - no_2;
        writeResult("Roznica", no_1, no_2, result);
        break;
    case '*':
        readNumbers(no_1, no_2);
        result = no_1 * no_2;
        writeResult("Iloczyn", no_1, no_2, result);
        break;
    case '/':
        readNumbers(no_1, no_2);
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

void readNumbers(double& number_1, double& number_2){
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> number_1;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> number_2;
}

void writeResult(std::string charCalculate, double& number_1, double& number_2, double& resultCalc){
    std::cout << "\n" << charCalculate << " liczb " << number_1 << " i " << number_2 << " wynosi " << resultCalc << "\n";
}