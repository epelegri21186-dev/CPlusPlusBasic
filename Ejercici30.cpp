#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

void intro() {
    cout << "En una època on els gegants governen Menorca. Nosaltres necessitem menjar,\n"
         << "Estem seguint el rastre de l'olor del menjar, però ens trobem en una cruïa.\n"
         << "Al final de cada camí hi ha un talaiot, en un viuen els gegants bons que ens convidaran\n"
         << "i en l'altre són uns caníbals afamats, i ens menjaran just ens vegin.\n";
}

string canviTalaiot() {
    string talaiot;
    while (talaiot != "1" && talaiot != "2") {
        cout << "A quin Talaiot vols anar? Introdueixi 1 o 2: ";
        cin >> talaiot;
    }
    return talaiot;
}

bool trobada(string canviTalaiot) {
    cout << "T'estas apropant al talaiot...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Està fosc i és tenebrós...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Un gran gegant salta davant teu, t'agafa i ...\n\n";
    this_thread::sleep_for(chrono::seconds(2));

    srand(static_cast<unsigned int>(time(0)));
    int gegantamic = rand() % 2 + 1;
    if (canviTalaiot == to_string(gegantamic)) {
        cout << "Et convida a menjar...\n";
        return true; 
    } else {
        cout << "Se't menja d'un mos...ÑAMÑAMÑAM\n";
        return false;
    }
}

int main() {
    string partidaNova = "si";
    int punts = 0;

    while (partidaNova == "s" || partidaNova == "si") {
        intro();
        string nTalaiot = canviTalaiot();
        bool guanya = trobada(nTalaiot);
        if (guanya) {
            punts += 1;
        } else {
            cout << "Has perdut! Els teus punts totals són: " << punts << "\n";
            break;
        }

        cout << "Els teus punts actuals són: " << punts << "\n";
        cout << "Vols tornar a jugar? (si o no): ";
        cin >> partidaNova;
        cout << "\n";
    }

    return 0;
}