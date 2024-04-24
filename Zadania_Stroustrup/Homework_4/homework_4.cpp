#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

//funkcja ogólnego przeznaczenia
void clearBufferIn();
void printVectorInt(const std::vector<int>&);
/*
//funkcje do punktu 2
int mediana(std::vector<int>&);

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
*/
//funkcje do punktu 11, 12, 15
//int find_primes(const int& number);


//funkcje do punktu 13 i 14
//std::vector<int> eratostenes(const int& max);

//funkcje do punktu 16
int dominant(std::vector<unsigned int>& collection_in); 


int main(){
/*
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

    //8. Program obliczający ilość ziaren ryżu dla pola szachownicy
    {
        std::vector<int> num_of_rice_grains(64);
        int count = 0;
        num_of_rice_grains[count] = 1;
        while (num_of_rice_grains[count] <= 1000 and count < 63){
            ++count;
            num_of_rice_grains[count] = (num_of_rice_grains[count - 1] * 2);   //co będzie jesli biezaca wartosc pozycji vectora nie będzie równa 0?
            std::cout << "Wartosc elementu nr " << count << " wynosi " << num_of_rice_grains[count] << '\n'; 
        }
        
        std::cout << "Potrzeba " << count << " pol szachownicy aby przekroczyc wartosc 1 000\n";

        while (num_of_rice_grains[count] <= 1000000 and count < 63){
            ++count;
            num_of_rice_grains[count] = (num_of_rice_grains[count - 1] * 2);   //co będzie jesli biezaca wartosc pozycji vectora nie będzie równa 0?
            std::cout << "Wartosc elementu nr " << count << " wynosi " << num_of_rice_grains[count] << '\n'; 
        }

        std::cout << "Potrzeba " << count << " pol szachownicy aby przekroczyc wartosc 1 000 000\n";
    }

    //9. Obliczanie ilości ziaren dla typów int i double
    {
        std::vector<int> vec_int_rice_grains(64);
        std::vector<double> vec_double_rice_grains(64);
        std::vector<float> vec_float_rice_grains(64);
        int count_1 = 0, count_2 = 0, count_3 = 0;
        
        vec_int_rice_grains[count_1] = 1;

        while(count_1 < 64){
            std::cout << "Wartosc elementu int nr " << count_1 << " wynosi "
            << vec_int_rice_grains[count_1] << '\n';
            ++count_1;
            vec_int_rice_grains[count_1] = (vec_int_rice_grains[count_1 - 1] * 2);
            
            int maks_capacity = int(pow(2, ((sizeof(int)*8))-1)-1);

            std::cout << "wartosc maks wynosi: " << maks_capacity << '\n';

            if(vec_int_rice_grains[count_1] == maks_capacity || vec_int_rice_grains[count_1] < 0){
                std::cout << "Maksymalna ilosc pol dla typu int to: " << (count_1)
                << " a wartosc " << vec_int_rice_grains[count_1] << '\n';
                break;
            }
                else if(vec_int_rice_grains[count_1] < vec_int_rice_grains[count_1 - 1]){
                std::cout << "Maksymalna ilosc pol dla typu int to: " << (count_1 - 1)
                << " a wartosc " << vec_int_rice_grains[count_1 -1] << '\n';
                break;
            }
        }

        //tu dopisać warunke maks z użyciem wartosci maks
        vec_double_rice_grains[count_2] = 1;
        while(count_2 < (sizeof(double) * 8)){
            std::cout << "Wartosc elementu double nr " << count_2 << " wynosi " << vec_double_rice_grains[count_2] << '\n';
            ++count_2;
            vec_double_rice_grains[count_2] = (vec_double_rice_grains[count_2 - 1] * 2);
            
            if(vec_double_rice_grains[count_2 - 1] > vec_double_rice_grains[count_2]){
                std::cout << "Maksymalna ilosc pol dla typu double to: " << (count_2 - 1) << " a wartosc " << vec_double_rice_grains[count_2 -1] << '\n';
                break;
            }
        }

        //tu dopisać warunke maks z użyciem wartosci maks
        vec_float_rice_grains[count_3] = 1;
        while(count_3 < 64){
            std::cout << "Wartosc elementu float nr " << count_3 << " wynosi " << vec_float_rice_grains[count_3] << '\n';
            ++count_3;
            vec_float_rice_grains[count_3] = (vec_float_rice_grains[count_3 - 1] * 2);
            
            if(vec_float_rice_grains[count_3 - 1] > vec_float_rice_grains[count_3]){
                std::cout << "Maksymalna ilosc pol dla typu float to: " << (count_3 - 1) << " a wartosc " << vec_float_rice_grains[count_3 -1] << '\n';
                break;
            }
        }
    }

    //10. Papier, kamień, nożyce
    {
        std::vector<std::string> comp_answers {"papier", "kamien", "nozyce"};

        int user_answer {};

        //Udoskonalić proces losowego wybierania liczny - na razie się powtarzaja
        int comp_answer_index = rand() % 3;
        std::cout << "Wartosc comp_answer_index: " << comp_answer_index << '\n';

        std::cout << "wpisz liczbe odpowiadajaca jednej z trzech wartosci - papier, kamien, nozyce:\n";
        std::cout << "1 - papier\n";
        std::cout << "2 - kamien\n";
        std::cout << "3 - nozyce\n";
        std::cin >> user_answer;

        switch (user_answer){
        case 1:
            std::cout << "Wybrales papier\n";
            if(comp_answer_index == 0){
                std::cout << "Remis\n";
            }
            else if(comp_answer_index == 1){
                std::cout << "Odpowiedz komputera to " << comp_answers[comp_answer_index] << '\n'
                << "Wygrales!!! - papier owija kamien\n";
            }
            else{
                std::cout << "Odpowiedz komputera to " << comp_answers[comp_answer_index] << '\n'
                << "Przegrales:( - nozyce potna papier\n";
            }
            break;

        case 2:
            std::cout << "Wybrales kamien\n";
            if(comp_answer_index == 1){
                std::cout << "Remis\n";
            }
            else if(comp_answer_index == 0){
                std::cout << "Odpowiedz komputera to " << comp_answers[comp_answer_index] << '\n'
                << "Przegrales:( - papier owija kamien\n";
            }
            else{
                std::cout << "Odpowiedz komputera to " << comp_answers[comp_answer_index] << '\n'
                << "Wygrales!!! - Kamien stepi nozyce\n";
            }
            break;

        case 3:
            std::cout << "Wybrales nozyce\n";
            if(comp_answer_index == 2){
                std::cout << "Remis\n";
            }
            else if(comp_answer_index == 0){
                std::cout << "Odpowiedz komputera to " << comp_answers[comp_answer_index] << '\n'
                << "Wygrales!!! - nozyce potna papier\n";
            }
            else{
                std::cout << "Odpowiedz komputera to " << comp_answers[comp_answer_index] << '\n'
                << "Przegrales:( - Kamien stepi nozyce\n";
            }
            break;
        
        default:
            std::cout << "Niewłasciwa odpowiedz\n";
            break;
        }

    }

    //11. Program znajdujacy liczby pierwsze z zakresu 0 - 100
    //do skompilowania potrzebuję funkcji:
    //vector<int> find_primes(const int& min, const int& max)
    //void printVectorInt(const std::vector<int>&)

    {
        int min {3};
        int max {100};

        std::cout << "Program do znajdowania liczb pierwszych z zakresu 1 - 100\n";
        std::cout << "LIczby pierwsze w tym zakresie to: ";

        std::vector<int> primes = find_primes(min, max);

        printVectorInt(primes);
        
    }

    //12. Program znajdujacy liczby pierwsze z zakresu 0 - max
    //to jest modyfikacja programu z punktu 11 - max podaje użytkownik
    //do skompilowania potrzebuję funkcji:
    //vector<int> find_primes(const int& min, const int& max)
    //void printVectorInt(const std::vector<int>&)

    {
        int min {1};
        int max {};

        std::cout << "Program do znajdowania liczb pierwszych z zakresu od 1 do max\n";
        
        std::cout << "podaj wartosc max: ";
        std::cin >> max;

        std::cout << "LIczby pierwsze w tym zakresie to: ";

        std::vector<int> primes = find_primes(min, max);

        printVectorInt(primes);

        clearBufferIn();
        
    }

    //13. Liczby pierwsze z zakresu 1 - 100 metodą sita Eratostenesa
    //do skompilowania potrzebuję funkcji:
    //vector<int> eratostenes(const int& min, const int& max)
    //void printVectorInt(const std::vector<int>&)

    {
        int max {100};

        std::cout << "Program do znajdowania liczb pierwszych z zakresu 1 - 100\n";
        std::cout << "LIczby pierwsze w tym zakresie to: ";

        std::vector<int> primes = eratostenes(max);

        printVectorInt(primes);
    }

    //14. Liczby pierwsze z zakresu 1 - max metodą sita Eratostenesa
    //do skompilowania potrzebuję funkcji:
    //vector<int> eratostenes(const int& min, const int& max)
    //void printVectorInt(const std::vector<int>&)

    {
        int max {};

        std::cout << "Program do znajdowania liczb pierwszych z zakresu 1 - max\n";

        std::cout << "Podaj wartosc max: ";
        std::cin >> max;

        std::cout << "LIczby pierwsze w tym zakresie to: ";

        std::vector<int> primes = eratostenes(max);

        printVectorInt(primes);

        clearBufferIn();

    }

    //15. Liczby pierwsze w ilosci n metodą sita Eratostenesa
    //do skompilowania potrzebuję funkcji:
    //vector<int> eratostenes(const int& min, const int& max)
    //void printVectorInt(const std::vector<int>&)
    //działa poprawnie tylko do n = 11, powyżej nic nie drukuje

    {
        //int min {3};
        //int max = min + 1;
        unsigned int number {1};
        unsigned int n {};
        std::vector<int> primes {};

        std::cout << "Program do znajdowania n liczb pierwszych\n";

        std::cout << "Podaj wartosc n - ilosci liczb pierwszych poczawszy od 1: ";
        std::cin >> n;

        std::cout << "n - liczb pierwszych wyglada tak: ";

        while(primes.size() < n){
            //primes = eratostenes(max);
            if(find_primes(number)){
                primes.push_back(find_primes(number));
            }
            number++;
            //min++;
            //max++;
        }

        printVectorInt(primes);

        clearBufferIn();

    }
*/
    //16. Dominanta

    {

    }


    return 0;
}