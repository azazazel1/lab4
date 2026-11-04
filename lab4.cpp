// lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/*
* zad1
start: a=45, b=25, globalna=10.
dodawanie(): dziala na kopiach, zwraca 70 (suma=70). a i b bez zmian.
main(): a += 4 -> a roœnie do 49.
wyswietlanie(): dziala na kopiach. Wypisuje 49+25=74. zmienia globaln¹ na 20.
   Linie a=111, b=222 s¹ lokalne i nie zmieniaj¹ main().
koniec main(): Wypisuje globaln¹ (20) oraz nienaruszone a=49, b=25.
*/

int zmiennaGlobalna = 10;
#include <iostream>

using namespace std;

int dodawanie(int a, int b);
void wyswietlanie(int a, int b);
void imie();
void tabliczkamnozenia();
void zmiennaaib();

int main()
{
    int a = 45, b = 25;
    int suma = dodawanie(a, b);
    cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
    a += 4;
    wyswietlanie(a, b);
    cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
    cout << "Wartosci a oraz b: " << a << " i " << b << endl;

    imie();

	tabliczkamnozenia();

    zmiennaaib();

    return 0;
}

int dodawanie(int c, int b) {
    b = c + b;
    return b;
}

void wyswietlanie(int a, int b) {
    cout << "Wynik procedury / funkcji z void: " << a + b << endl;
    zmiennaGlobalna = 20;
    a = 111;
    b = 222;
}

void imie() {
    char imie[20];
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Czesc " << imie << endl;
}
/*
* zad2
zmienna char pobiera imie
cout wypisuje imie
*/
void tabliczkamnozenia() {
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            
            cout << i * j << "\t";
        }
       
        cout << "\n";
    }
}
/*
zad3
zmienna i to licznik wierszy, j to licznik kolumn
cout wypisuje wynik mnozenia i*j, \t to tabulator, \n to nowa linia
*/
void zmiennaaib(){
    int a;
    int b;
	cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    if (a > b) {
        cout << a;
    }
    else {
		cout << b;
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
