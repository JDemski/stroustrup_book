#include <iostream>
#include <vector>

int mediana(std::vector<int>& vecInt){
    int outputValue {};
    int tempInt {};
    int vec_size = vecInt.size();

    if(vec_size % 2){
        outputValue = vecInt[vec_size / 2];
    }
    else{
        tempInt = (vecInt[(vec_size / 2) - 1] + vecInt[vec_size / 2]) / 2;
        vecInt.insert(vecInt.begin() + (vec_size / 2), tempInt);
        outputValue = vecInt[vec_size / 2];
    }
    return outputValue;
}