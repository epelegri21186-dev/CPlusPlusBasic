#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

// Funció per comptar la longitud de cada paraula
vector<int> lenp(const string& frase) {
    vector<int> longituds;
    stringstream ss(frase);
    string paraula;

    // Llegir cada paraula de la frase
    while (ss >> paraula) {
        longituds.push_back(paraula.length()); // Afegir la longitud de cada paraula
    }

    return longituds;
}

int main() {
    string frase = "Comptant la longitud de cada paraula";
    vector<int> resultat = lenp(frase);

    // Mostrar els resultats
    cout << "Les longituds de les paraules són: ";
    for (int len : resultat) {
        cout << len << " ";
    }
    cout << endl;

    return 0;
}