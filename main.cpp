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
    else if (volba == 2)
    {
        cout << "Vstupujes do lesa..." << endl;
        cout << "Objevil se monstrum!" << endl;

        int monstrumHp = 6;

        while (monstrumHp > 0 && zivoty > 0)
        {
            cout << endl;
            cout << "Tvoje zivoty: " << zivoty << endl;
            cout << "Zivoty monstra: " << monstrumHp << endl;

            cout << "1 - Utok" << endl;
            cout << "2 - Utect" << endl;
            cout << "Tvoje volba: ";
            cin >> volba;

            if (volba == 1)
            {
                cout << "Utoceis na monstrum!" << endl;
                monstrumHp -= utok;

                if (monstrumHp > 0)
                {
                    cout << "Monstrum utoci zpatky!" << endl;
                    zivoty -= 2;
                }
            }
            else if (volba == 2)
            {
                cout << "Utekl jsi z boje!" << endl;
                break;
            }
        }

        if (zivoty > 0 && monstrumHp <= 0)
        {
            cout << "Porazil jsi monstruma!" << endl;
            zlato += 10;
            cout << "Ziskal jsi 10 zlata." << endl;
        }
    }
    else if (volba == 3)
    {
        cout << "Zivoty: " << zivoty << endl;
        cout << "Zlato: " << zlato << endl;
        cout << "Utok: " << utok << endl;
    }