#include <iostream>
#include <string>
using namespace std;

int main()
{
    string jmeno;
    int zivoty = 10;
    int zlato = 20;
    int utok = 3;
    int volba;

    cout << "=== MANAEATER ===" << endl;
    cout << "Vitej v textove hre!" << endl;
    cout << "Zadej jmeno hrace: ";
    cin >> jmeno;

    cout << endl;
    cout << "Ahoj, " << jmeno << "!" << endl;
    cout << "Tvuj ukol je projit cestou, porazit monstra" << endl;
    cout << "a na konci premoci hlavniho bosse Manaeatera." << endl;

    cout << endl;
    cout << "Tvoje statistiky:" << endl;
    cout << "Zivoty: " << zivoty << endl;
    cout << "Zlato: " << zlato << endl;
    cout << "Utok: " << utok << endl;

    cout << endl;
    cout << "Stojis na zacatku temne cesty." << endl;
    cout << "Co chces udelat?" << endl;
    cout << "1 - Jit do vesnice" << endl;
    cout << "2 - Jit do lesa" << endl;
    cout << "3 - Zobrazit statistiky" << endl;
    cout << "Tvoje volba: ";
    cin >> volba;

    if (volba == 1)
    {
        cout << "Prichazis do vesnice." << endl;
    }