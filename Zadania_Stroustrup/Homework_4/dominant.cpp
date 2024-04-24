#include <iostream>
#include <vector>

int dominant(std::vector<int>& collection_in){

    struct Dominant{

        int counter {};
        int value {};

    };

    std::vector<Dominant> values {};
    Dominant number {}, previous_number {0, 0};
    int count {1};
    int dominant_value {};  //wartość zwracana

    if(collection_in.size() != 0){
        std::cout << "Pusty zbior wejsciowy\n";
        return -1;
    }
    else if(collection_in.size() == 1){
        dominant_value = collection_in[0];
        return dominant_value;
    }
    else{
        previous_number = {collection_in[0], count};
        values.push_back(previous_number);

        for(int i = 1; i < collection_in.size(); ++i){
            for(int j = values.size(); j >= 0; --j){
                number = values[j];
                if(collection_in[i] == number.value){
                    ++number.counter;
                }
                else{
                    values.push_back(number);
                }
            }
        }
    }

    

    return 1;
}