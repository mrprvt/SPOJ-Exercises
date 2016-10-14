/* PROBLEM

Sprawdź, które spośród danych liczb są liczbami pierwszymi
Input

n - liczba testów n<100000, w kolejnych liniach n liczb z przedziału [1..10000]
Output

Dla każdej liczby słowo TAK, jeśli liczba ta jest pierwsza, słowo: NIE, w przeciwnym wypadku.
Example

Input:
3
11
1
4

Output:
TAK
NIE
NIE

*/

#include <iostream>

    using namespace std;

int main(){

    int liczba;
    int liczbaKolejek;
    int liczbaDzielnikow;

    //liczbaKolejek = 100;

    cin >> liczbaKolejek;

    // wartosc liczby to ilosc razy

    for(int i = 0; i < liczbaKolejek; i++){

    liczbaDzielnikow = 0;

        cin >> liczba;

        for(int i = 1; i <= liczba; i++){

            if(liczba > 1 && liczba%2 > 0){

                if(liczba%i == 0) liczbaDzielnikow++;

            }else liczbaDzielnikow = 3;

            if(liczba%i == 0 && liczba > 2) cout << "Dzielniki liczby " << liczba << " to " << i << endl;

        }

        if(liczbaDzielnikow <= 2) cout << "TAK\n"; // jest liczba pierwsza
        else cout << "NIE\n"; // nie jest liczba pierwsza

    }

        return 0;

}























