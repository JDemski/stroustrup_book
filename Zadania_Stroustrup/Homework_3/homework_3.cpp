#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    //2. Konwesrsja mil na kilometry 1 mila = 1,609
    {
        std::cout << "\nKonwersja mil na kilometry:\n";
        double km {}, mil {};
        constexpr double KM_MIL = 1.609;
        std::cout << "Podaj liczbe mil: ";
        std::cin >> mil;
        km = KM_MIL * mil;
        std::cout << "Liczba kilometrow wynosi: " << km << " dla " << mil << " mil.\n";
    }
    //3. Dekslaracja kilku zmiennych o poprawnych i niepoprawnych nazwach
    //int double = 0; invalid combination of type specifiers
    //const float int {}; invalid combination of type specifiers

    //4. Dwie liczby i porównania między nimi
    {
        std::cout << "\nPorownanie dwoch liczb topu int:\n";
        int intVal1 {}, intVal2{};
        std::cout << "Podaj pierwsza liczbe: ";
        std::cin >> intVal1;
        std::cout << "Podaj druga liczbe: ";
        std::cin >> intVal2;
        if(intVal1 == intVal2){
            std::cout << "Liczby " << intVal1 << " i " << intVal2 << " sa rowne.\n";
        }
        else if(intVal1 < intVal2){
            std::cout << "Liczba " << intVal2 << " jest wieksza od liczby " << intVal1 << "\n";
        }
        else{
            std::cout << "Liczba " << intVal1 << " jest wieksza od liczby " << intVal2 << "\n";
        }
        std::cout << "Suma liczb wynosi: " << (intVal1 + intVal2) << "\n";
        std::cout << "Roznica liczba 1 minus liczba 2 wynosi: " << (intVal1 - intVal2) << "\n";
        std::cout << "Iloczyn liczb wynosi: " << (intVal1 * intVal2) << "\n";
        std::cout << "Proporcja liczby 1 do liczby 2 wynosi: " << (intVal1 / intVal2) << "\n";
    }

    //5. Modyfikacja programu z pkt. 4 dla typu double
    {
        std::cout << "\nPorownanie dwoch liczb typu double:\n";
        double doubleVal1 {}, doubleVal2 {};
        std::cout << "Podaj pierwsza liczbe: ";
        std::cin >> doubleVal1;
        std::cout << "Podaj druga liczbe: ";
        std::cin >> doubleVal2;
        if(doubleVal1 == doubleVal2){
            std::cout << "Liczby " << doubleVal1 << " i " << doubleVal2 << " sa rowne.\n";
        }
        else if(doubleVal1 < doubleVal2){
            std::cout << "Liczba " << doubleVal2 << " jest wieksza od liczby " << doubleVal1 << "\n";
        }
        else{
            std::cout << "Liczba " << doubleVal1 << " jest wieksza od liczby " << doubleVal2 << "\n";
        }
        std::cout << "Suma liczb wynosi: " << (doubleVal1 + doubleVal2) << "\n";
        std::cout << "Roznica liczba 1 minus liczba 2 wynosi: " << (doubleVal1 - doubleVal2) << "\n";
        std::cout << "Iloczyn liczb wynosi: " << (doubleVal1 * doubleVal2) << "\n";
        std::cout << "Proporcja liczby 1 do liczby 2 wynosi: " << (doubleVal1 / doubleVal2) << "\n";
    }

    //6. Wczytanie trzech liczb od użytkownika. Wyświetlenie ich w kolejnosci od najmniejszjej do najwiekszej.
    //Jesli takie same to wyswietlic je obok siebie
    {
        std::cout << "\nWyswietlanie trzech liczb typu int w kolejnosci od najmniejszej do najwiekszej:\n";
        int intValueForCompare_1 {}, intValueForCompare_2 {}, intValueForCompare_3 {};
        int intTemporary {};
        std::cout << "Podaj wartosc pierwszej liczby: ";
        std::cin >> intValueForCompare_1;
        std::cout << "Podaj wartosc drugiej liczby: ";
        std::cin >> intValueForCompare_2;
        std::cout << "Podaj wartosc trzeciej liczby: ";
        std::cin >> intValueForCompare_3;
        if(intValueForCompare_1 < intValueForCompare_2){
            if(intValueForCompare_2 < intValueForCompare_3);
            else{
                intTemporary = intValueForCompare_2;
                intValueForCompare_2 = intValueForCompare_3;
                intValueForCompare_3 = intTemporary;
                if(intValueForCompare_1 < intValueForCompare_2);
                else{
                    intTemporary = intValueForCompare_1;
                    intValueForCompare_1 = intValueForCompare_2;
                    intValueForCompare_2 = intTemporary;
                }
            }
        
        }
        else{
            intTemporary = intValueForCompare_1;
            intValueForCompare_1 = intValueForCompare_2;
            intValueForCompare_2 = intTemporary;
            if(intValueForCompare_2 < intValueForCompare_3);
            else{
                intTemporary = intValueForCompare_2;
                intValueForCompare_2 = intValueForCompare_3;
                intValueForCompare_3 = intTemporary;
                if(intValueForCompare_1 < intValueForCompare_2);
                else{
                    intTemporary = intValueForCompare_1;
                    intValueForCompare_1 = intValueForCompare_2;
                    intValueForCompare_2 = intTemporary;
                }
            }
        }
        std::cout << "Liczby w kolejnosci od najmniejszej do najwiekszej: " << intValueForCompare_1 << ", " << intValueForCompare_2
            << ", " << intValueForCompare_3 << "\n";
    }

    //7. Program z punktu 6 ale przyjmujacy zamiast wartosci int typ string
    {
        std::cout << "\nWyswietlanie trzech ciagow string w kolejnosci alfabetycznej:\n";
        std::string stringValueForCompare_1 {}, stringValueForCompare_2 {}, stringValueForCompare_3 {};
        std::string stringTemporary {};
        std::cout << "Podaj wartosc pierwszego ciagu: ";
        std::cin >> stringValueForCompare_1;
        std::cout << "Podaj wartosc drugiego ciagu: ";
        std::cin >> stringValueForCompare_2;
        std::cout << "Podaj wartosc trzeciego ciagu: ";
        std::cin >> stringValueForCompare_3;
        if(stringValueForCompare_1 < stringValueForCompare_2){
            if(stringValueForCompare_2 < stringValueForCompare_3);
            else{
                stringTemporary = stringValueForCompare_2;
                stringValueForCompare_2 = stringValueForCompare_3;
                stringValueForCompare_3 = stringTemporary;
                if(stringValueForCompare_1 < stringValueForCompare_2);
                else{
                    stringTemporary = stringValueForCompare_1;
                    stringValueForCompare_1 = stringValueForCompare_2;
                    stringValueForCompare_2 = stringTemporary;
                }
            }
        
        }
        else{
            stringTemporary = stringValueForCompare_1;
            stringValueForCompare_1 = stringValueForCompare_2;
            stringValueForCompare_2 = stringTemporary;
            if(stringValueForCompare_2 < stringValueForCompare_3);
            else{
                stringTemporary = stringValueForCompare_2;
                stringValueForCompare_2 = stringValueForCompare_3;
                stringValueForCompare_3 = stringTemporary;
                if(stringValueForCompare_1 < stringValueForCompare_2);
                else{
                    stringTemporary = stringValueForCompare_1;
                    stringValueForCompare_1 = stringValueForCompare_2;
                    stringValueForCompare_2 = stringTemporary;
                }
            }
        }
        std::cout << "Ciagi znakow w kolejnosci alfabetycznej: " << stringValueForCompare_1 << ", " << stringValueForCompare_2
            << ", " << stringValueForCompare_3 << "\n";
    }

    //8. Sprawdzanie czy podana liczba jest parzysta czy nie
    {
        std::cout << "\nSprawdzanie czy liczba parzysta\n";
        int inttValue {};
        std::cout << "Podaj liczbe: ";
        std::cin >> inttValue;
        if(inttValue % 2){
            std::cout << "Liczba " << inttValue << " nie jest parzysta\n";
        }
        else{
            std::cout << "Liczba " << inttValue << " jest parzysta\n";
        }
    }

    //9. Konwerter słownie zapisanych wartości (string) na cyfrowe odpowiedniki
    {
        std::cout << "\nProgram konwertujacy zapisane wartosci znakow na ich liczbowe odpowiedniki\n";
        std::string stringNumber {};
        int stringToNumber {};
        std::cout << "Podaj znak z zakresu 0 - 4 do przekonwertowania: ";
        std::cin >> stringNumber;
        if(stringNumber == "0" || stringNumber == "1" || stringNumber == "2" || stringNumber == "3" || stringNumber == "4"){
            if(stringNumber == "0"){
                stringToNumber = 0;
                std::cout << "Wpisales wartosc liczbowa rowna: " << stringToNumber << "\n";
            }
            else if(stringNumber == "1"){
                stringToNumber = 1;
                std::cout << "Wpisales wartosc liczbowa rowna: " << stringToNumber << "\n";
            }
            else if(stringNumber == "2"){
                stringToNumber = 2;
                std::cout << "Wpisales wartosc liczbowa rowna: " << stringToNumber << "\n";
            }
            else if(stringNumber == "3"){
                stringToNumber = 3;
                std::cout << "Wpisales wartosc liczbowa rowna: " << stringToNumber << "\n";
            }
            else{
                stringToNumber = 4;
                std::cout << "Wpisales wartosc liczbowa rowna: " << stringToNumber << "\n";
            }
        }
        else{
            std::cout << "You are idiot! You MUST type number from 0 to 4!\n";
        }
    }

    //10. Operator typu string i dwa operandy typu double
    {
        std::cout <<"\nOperator arytmetyczny typu string i dwa operandy typu double\n";
        std::string operatorString {};
        double operand_1 {}, operand_2 {}, result {};
        std::cout << "Podaj operator z zakresu: + - * / ";
        std::cin >> operatorString;
        std::cout << "Podaj pierwszy operand: ";
        std::cin >> operand_1;
        std::cout << "Podaj drugi operand: ";
        std::cin >> operand_2;
        if(operatorString == "+" || operatorString == "-" || operatorString == "*" || operatorString == "/"){
            if(operatorString == "+"){
                result = operand_1 + operand_2;
                std::cout << operatorString << " " << operand_1 << " " << operand_2 << " rowna sie: " << result << "\n";
            }
            else if(operatorString == "-"){
                result = operand_1 - operand_2;
                std::cout << operatorString << " " << operand_1 << " " << operand_2 << " rowna sie: " << result << "\n";
            }
            else if(operatorString == "*"){
                result = operand_1 * operand_2;
                std::cout << operatorString << " " << operand_1 << " " << operand_2 << " rowna sie: " << result << "\n";
            }
            else{
                result = operand_1 / operand_2;
                std::cout << operatorString << " " << operand_1 << " " << operand_2 << " rowna sie: " << result << "\n";
            }
        }
        else{
            std::cout << "Podales nieprawidlowy operator\n";
        }
    }

    //11. Podanie informacji o liczbie monet, wyświetlenie i podsumowanie
    {
        std::cout << "\nProgram zbierajacy informacje o posiadanych moanetach i podliczajacy je\n";
        int oneGr {}, twoGr {}, fiveGr {}, tenGr {}, fiftyGr {}, resultGr {};
        double resultZl {};
        std::string grSuffix {};
        std::cout << "Podaj liczbe monet jednogroszowych: ";
        std::cin >> oneGr;
        std::cout << "Podaj liczbe monet dwugroszowych: ";
        std::cin >> twoGr;
        std::cout << "Podaj liczbe monet pieciogroszowych: ";
        std::cin >> fiveGr;
        std::cout << "Podaj liczbe monet dziesieciogroszowych: ";
        std::cin >> tenGr;
        std::cout << "Podaj liczbe monet piecdziesieciogroszowych: ";
        std::cin >> fiftyGr;
        if(oneGr == 1){
            grSuffix = "groszowke";
        }
        else if (oneGr >= 2 && oneGr <= 4){
            grSuffix = "groszowki";
        }
        else{
            grSuffix = "groszowek";
        }
        std::cout << "\nMasz\t" << oneGr << "\tjedno" << grSuffix << "\n";
        if(twoGr == 1){
            grSuffix = "groszowke";
        }
        else if (twoGr >= 2 && twoGr <= 4){
            grSuffix = "groszowki";
        }
        else{
            grSuffix = "groszowek";
        }
        std::cout << "\nMasz\t" << twoGr << "\tdwu" << grSuffix << "\n";
        if(fiveGr == 1){
            grSuffix = "groszowke";
        }
        else if (fiveGr >= 2 && fiveGr <= 4){
            grSuffix = "groszowki";
        }
        else{
            grSuffix = "groszowek";
        }
        std::cout << "\nMasz\t" << fiveGr << "\tpiecio" << grSuffix << "\n";
        if(tenGr == 1){
            grSuffix = "groszowke";
        }
        else if (tenGr >= 2 && tenGr <= 4){
            grSuffix = "groszowki";
        }
        else{
            grSuffix = "groszowek";
        }
        std::cout << "\nMasz\t" << tenGr << "\tdziesiecio" << grSuffix << "\n";
        if(fiftyGr == 1){
            grSuffix = "groszowke";
        }
        else if (fiftyGr >= 2 && fiftyGr <= 4){
            grSuffix = "groszowki";
        }
        else{
            grSuffix = "groszowek";
        }
        std::cout << "\nMasz\t" << fiftyGr << "\tpiecdziesiecio" << grSuffix << "\n";
        resultGr = (oneGr) + (2 * twoGr) + (5 * fiveGr) + (10 * tenGr) + (50 * fiftyGr);
        resultZl = resultGr / 100.00;
        std::cout << "Wartosc wszystkich Twoich monet: \n" << "\t" << resultGr << "\tgroszy" << "\t" << resultZl << "\tzlotych\n";
    }
    return 0;
}