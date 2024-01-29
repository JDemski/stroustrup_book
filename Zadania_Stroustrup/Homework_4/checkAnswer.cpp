#include <iostream>

int calcGuessValue(int& downLimit, int& upLimit);
void clearBufferIn();

bool checkAnswer(char& userDecision, int& guessValue, int& downLimit, int& upLimit){

    bool status {true};

    if(userDecision == 'q'){
            std::cout << "Fantastycznie, Twoja pomyslana liczba to " << guessValue << "!\n";
            status = false;
        }
        else if(userDecision == 'w'){
            downLimit = guessValue;
            guessValue = calcGuessValue(downLimit, upLimit);
        }
        else{
            upLimit = guessValue;
            guessValue = calcGuessValue(downLimit, upLimit);
        }

    clearBufferIn();

    return status;

}