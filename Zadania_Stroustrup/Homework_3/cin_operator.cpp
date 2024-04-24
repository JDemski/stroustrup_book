#include <iostream>

int main(){

    std::string string_var;
    int int_var;

    std::cout << "Podaj wartosc string i int: ";
    std::cin >> string_var >> int_var;

    std::cout << "string_var: " << string_var << '\n';
    std::cout << "int_var: " << int_var << '\n';
    
    return 0;
}