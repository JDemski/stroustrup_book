#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> eratostenes(const int& max){

    std::vector<int> primes {};
    
    if(max <= 0){
        std::cout << "Wartosc parametru max niewlasciwa\n";
        return primes;
    }

    switch (max)
    {
    case 1:
        primes.push_back(1);
        break;
    
    default:

        double sqrt_max = int(sqrt(max));
    
        std::vector<bool> eratost_bool (max);

        for(auto element: eratost_bool){
            element = true;
        }

        for(int i = 2; i <= sqrt_max; ++i){
            if(eratost_bool[i] == true){
                for(int j = 2; (j * i) < max; ++j){
                    if(eratost_bool[j * i]){
                    eratost_bool[j * i] = false;
                    }
                }
            }
        }

        for(int i = 1; i < max; ++i){
            if(eratost_bool[i] == true){
                primes.push_back(i);
            }
        }
    }

    return primes;
    }