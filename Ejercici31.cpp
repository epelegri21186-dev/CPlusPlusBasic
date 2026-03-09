#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int codi[4];
    int intent[4];

    // Generar codi aleatori de 4 xifres (0-9)
    for (int i = 0; i < 4; i++) {
        codi[i] = rand() % 10;
    }

    int encertats = 0;

    cout << "Joc MasterMind (codi de 4 xifres)" << endl;

    while (encertats != 4) {
        cout << "\nIntrodueix 4 xifres: \n";

        for (int i = 0; i < 4; i++) {
            cin >> intent[i];
        }

        encertats = 0;
        int coincideixen = 0;

        bool usatCodi[4] = {false,false,false,false};
        bool usatIntent[4] = {false,false,false,false};

        // Comprovar encertats (mateixa posició)
        for (int i = 0; i < 4; i++) {
            if (intent[i] == codi[i]) {
                encertats++;
                usatCodi[i] = true;
                usatIntent[i] = true;
            }
        }

        // Comprovar coincideixen (mateix número però posició diferent)
        for (int i = 0; i < 4; i++) {
            if (!usatIntent[i]) {
                for (int j = 0; j < 4; j++) {
                    if (!usatCodi[j] && intent[i] == codi[j]) {
                        coincideixen++;
                        usatCodi[j] = true;
                        break;
                    }
                }
            }
        }

        cout << "Encertats: " << encertats << endl;
        cout << "Coincideixen: " << coincideixen << endl;
    }

    cout << "\nHas endevinat el codi!" << endl;

    return 0;
}