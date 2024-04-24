// Lista4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "UserInterface.h"
void ChooseType() {
    std::string wybor="";
    while(wybor!="quit"){
        std::cout << "Podaj typ dla drzewa(int, double, string) lub `quit` aby wyjsc: ";
        std::getline(std::cin, wybor);
        if (wybor == "int")
            UserInterface<int> intefrace;
        else if (wybor == "double")
            UserInterface<double> intefrace;
        else if (wybor == "string")
            UserInterface<std::string> intefrace;
        else if (wybor == "quit")
            std::cout << "Do widzenia";
        else {
            std::cout << "\nNierozpoznano komendy. ";
        }
    }
}
int main()
{
   ChooseType();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
