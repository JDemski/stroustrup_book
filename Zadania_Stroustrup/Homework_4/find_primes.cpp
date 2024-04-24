#include <iostream>
#include <vector>

int find_primes(const int& number){

    std::vector<int> primes {};
    int check {};
    
    if(number <= 0){
        std::cout << "Blad - niewlasiciwa wartosc\n";
        return 0;
    }

    switch (number){
        case 1:
            return 1;
            break;

        case 2:
            return 2;
            break;

        default:
            for(int i = (number - 1); i >= 2; --i){
                check = number % i;
                if(!check){
                break;
                }
            }

                if(check){
                    return number;
                }  
    }
return 0;   
}