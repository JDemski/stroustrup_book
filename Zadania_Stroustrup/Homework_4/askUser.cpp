#include <iostream>

int calcGuessValue(int& downLimit, int& upLimit);

void askUser(int& downLimit, int& upLimit, int& guessValue, char& userDecision){

    guessValue = calcGuessValue(downLimit, upLimit);
    std::cout << "Czy ta liczba jest wieksza od " << guessValue << "? Jesli tak to wcisnij: w a nastepnie Enter\n";
    std::cout << "Jesli jest mniejsza od " << guessValue << " nacisnij: m a nastepnie Enter\n";
    std::cout << "Jesli jest rowna " << guessValue << ", nacisnij: q a nastepnie Enter\n";
    std::cin >> userDecision;

}