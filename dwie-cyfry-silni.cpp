/*
Niech n będzie nieujemną liczbą całkowitą. Liczbę n! (czytaj n-silnia) definiuje się następująco.
Jeśli n ≤ 1, to n! = 1. Dla n > 1, n! jest równe iloczynowi wszystkich liczb od 1 do n, czyli n! = 1 * 2 * ... * n.
Na przykład 4! = 1*2*3*4 = 24.

Zadanie
Napisz program, który:

    wczyta ze standardowego wejścia nieujemną liczbę całkowitą n,
    policzy cyfrę dziesiatek oraz cyfrę jedności w zapisie dziesiętnym liczby n!,
    wypisze wynik na standardowe wyjście.

Wejście
W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤30), oznaczjąca liczbę przypadków do rozważenia.
Opis każdego przypadku składa się z jednej linii, w której znajduje się jedna nieujemna liczba całkowita n (0 ≤ n ≤ 1.000.000.000).

Wyjście
Dla każdego przypadku z wejścia. Twój program powinien wypisać w osobnej linii dokładnie dwie cyfry
(oddzielone pojedynczą spacją): cyfrę dziesiątek i cyfrę jedności liczby n! zapisanej w systemie dziesiętnym.

Przykład
Dla danych wejściowych:

2
1
4

poprawną odpowiedzią jest:

0 1
2 4
*/

/*

    7325

       5    = 10^0 *5
      20    = 10^1 *2
     300    = 10^2 *3
    7000    = 10^3 *7

       5    = 1    *5
      20    = 10   *2
     300    = 100  *3
    7000    = 1000 *7

    Rozwiązanie: modulo liczby, reszta itd

*/


#include <iostream>

    using namespace std;

int obliczSilnie(int liczba){

    int suma = 1; // mnozenie przez 1 nic nie zmienia, a 0 zeruje mnozenie

    for(int i = 1; i <= liczba; i++){

        //cout << "Working: " << i << " : " << suma << endl;
        suma = i*suma;

    }

    return suma;
}


int main(){

    int liczbaZestawow = 1;
    int liczba, silnia;//, garbage;

    //cin >> liczbaZestawow;

    for(int i = 0; i < liczbaZestawow; i++){

        cin >> liczba;
        if(liczba > 1 && liczba < 18) silnia = obliczSilnie(liczba);
    }

    cout << (silnia%100 - silnia%10)/10 << " " << silnia%10 << "\n";
    cout << silnia << " | " << (silnia%100 - silnia%10)/10 << " | " << silnia%10 << "\n";
    //cin >> garbage;

    return 0;
}
