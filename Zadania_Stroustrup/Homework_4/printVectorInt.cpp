#include <iostream>
#include <vector>

void printVectorInt(const std::vector<int>& intVect){

    for(auto element: intVect){
        std::cout << element << " ";        
    }
    std::cout << "\n";
}