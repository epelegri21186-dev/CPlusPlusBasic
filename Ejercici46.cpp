#include <iostream>
#include <vector>
#include <string>

using namespace std;

int index_paraula(const vector<string>& llista, string paraula) {
    int esquerra = 0;
    int dreta = llista.size() - 1;

    while (esquerra <= dreta) {
        int mig = (esquerra + dreta) / 2;

        if (llista[mig] == paraula) {
            return mig;
        } 
        else if (llista[mig] < paraula) {
            esquerra = mig + 1;
        } 
        else {
            dreta = mig - 1;
        }
    }

    return -1;
}

int main() {
    vector<string> paraules = {"arbre", "casa", "gat", "mar", "sol"};
    string paraula_buscar;

    cout << "Introdueix una paraula: ";
    cin >> paraula_buscar;

    int resultat = index_paraula(paraules, paraula_buscar);

    if (resultat != -1) {
        cout << "La paraula es troba a l'index: " << resultat << endl;
    } 
    else {
        cout << "La paraula no es troba a la llista." << endl;
    }

    return 0;
}