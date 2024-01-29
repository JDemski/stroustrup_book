#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

//funkcja ogólnego przeznaczenia
void clearBufferIn();

//funkcje do punktu 2
int mediana(std::vector<int>&);
void printVectorInt(const std::vector<int>&);

//funckje do punktu 3
double totalDistance(const std::vector<double>&);
double minDistance(const std::vector<double>&);
double maxDistance(const std::vector<double>&);
double averageDistance(const std::vector<double>&);

//funkcje do punktu 4
int calcGuessValue(int& downLimit, int& upLimit);
void askUser(int& downLimit, int& upLimit, int& guessValue, char& userDecision);
bool checkAnswer(char& userDecision, int& guessValue, int& downLimit, int& upLimit);

//funkcje do punktu 5
void calculator(char& charCalc);

//funkcje do punktu 6 i 7
int convertStringToDigit(const std::string& stringDigit);
std::string convertDigitToString(const int& intDigit);

//funkcje do punkgtu 7
void calculatorOneDigit(char& charCalc);

int main(){

    //Sprawdzić jak wyczyścić bufor wejściowy, bo zostaje tam znak końca linii i nie działa prawidłowo kod punktu 3.
    //2. Mediana szeregu liczb
    {
        std::cout << "\nProgram obliczajacy mediane szeregu liczb\n";
        std::cout << "Aby zakonczyc wprowadzanie liczb nacisnij CTRL + D\n";
        std::vector<int> vecInt {};
        int tempInt {};
        std::string recycleBin;
        std::cout << "Podaj liczby do szeregu: ";
        while(std::cin >> tempInt){
            vecInt.push_back(tempInt);
        }
        std::sort(vecInt.begin(), vecInt.end());      
        std::cout << "Mediana wynosi: " << mediana(vecInt) << "\n";
        printVectorInt(vecInt);
        clearBufferIn();
    }
    

    //3. Szereg double - odległości między dwoma miastami. Znaleźć sumę odległości, najmniejszą i największą odległość, średnią odległość między dwoma miastami
    {
        std::cout << "\nProgram wczytujacy odleglosci miedzy miastami\n";
        std::cout << "Aby zakonczyc wprowadzanie liczb nacisnij CTRL + D\n";
        std::vector<double> distanceCity {};
        double tempDouble {};
        std::cout << "Podaj kolejno odleglosci miedzy miastami: ";
        while(std::cin >> tempDouble){
            distanceCity.push_back(tempDouble);
        }
        std::cout << "Calkowity dystans wynosi: " << totalDistance(distanceCity) << "\n";
        std::cout << "Minimalna odleglosc miedzy miastami wynosi: " << minDistance(distanceCity) << "\n";
        std::cout << "Maksymalna odleglosc miedzy miastami wynosi: " << maxDistance(distanceCity) << "\n";
        std::cout << "Srednia odleglosc miedzy miastami wynosi: " << averageDistance(distanceCity) << "\n";
        clearBufferIn();
    }

    //4. Zgadywanie liczby z zakresu od 0 do 100. Progrma powinien byc w stanie zgadnąć liczbę po nie więcej niż siedmiu zadanych pytaniach.
    {
        constexpr int VALUE_UP_LIMIT = 100;
        constexpr int VALUE_DOWN_LIMIT = 0;
        char userDecision {};
        int guessValue {};
        int downLimit = VALUE_DOWN_LIMIT;
        int upLimit = VALUE_UP_LIMIT;
        bool status {true};
        int counter {};

        std::cout << "\nProgram do zgadywania liczb. To jest ulepszona wersja Chat GPT:)\n";
        std::cout << "Szanowny uzytkowniku, pomysl liczbe z zakresu od " << downLimit << " do " << upLimit << "\n"
            << "Juz pomyslales?. To sprubuje ja odgadnac.\n";

        while(status){

            std::cout << "Licznik zgadywan: " << ++counter << "\n";
            askUser(downLimit, upLimit, guessValue, userDecision);
            status = checkAnswer(userDecision, guessValue, downLimit, upLimit);
            
        }
    
    }

    //5. Kalkulator
    {
        char charCalc {};

        std::cout << "\nProgram kalkulator\n";
        std::cout << "Podaj dwie liczby oraz znak dzialania\n"
        << "Mozliwe znaki dzialania to: + - * /\n"
        << "Zakonczenie dzialania programu - nacisnij q\n";

        while(charCalc != 'q'){
            calculator(charCalc);
        }
    clearBufferIn();

    }

    //6. Program zamieniający zapis słowny liczb na cyforwy i odwrotnie
    {
        unsigned int digit {};
        std::string wordDigit {};
        std::vector<std::string> wordWrite {"zero", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec"};
        
        std::cout << "\nProgram ktory zamienia zapis cyfrowy liczb na slowny\n";
        std::cout << "Podaj cyfre: ";
        std::cin >> digit;
        std::cout << "\nZapis slowny cyfry " << digit << " to: " << convertDigitToString(digit) << "\n";
        
        std::cout << "A teraz odwrotnie, podaj slownie cyfre: ";
        std::cin >> wordDigit;
        std::cout << "Zapis " << wordDigit << " oznacza " << convertStringToDigit(wordDigit) << "\n";
        clearBufferIn();
    }

    //7. Modyfikacja kalkulatora z punktu 5 - wczytuje tylko wartości jednocyfrowe lub słowne
    {
        char charCalc {};

        std::cout << "\nProgram kalkulator w wersji przyjmujacej tylko wartosci jednocyfrowe lub slowne\n";
        std::cout << "Podaj dwie liczby jednocyfrowe lub zapisane slownie oraz znak dzialania\n"
        << "Mozliwe znaki dzialania to: + - * /\n"
        << "Zakonczenie dzialania programu - nacisnij q\n";

        while(charCalc != 'q'){
            calculatorOneDigit(charCalc);
        }
        clearBufferIn();
    }

    return 0;
}