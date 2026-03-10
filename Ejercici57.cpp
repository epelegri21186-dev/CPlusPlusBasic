#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció per concatenar dues llistes amb un connector
vector<string> concatenar_llistes(const vector<string>& llista1, const vector<string>& llista2, const string& connector) {
    vector<string> resultat;

    // Comprovem que les llistes tinguin la mateixa mida
    size_t n = llista1.size();
    if (n != llista2.size()) {
        cout << "Les llistes no tenen la mateixa mida!" << endl;
        return resultat;
    }

    // Concatenem les paraules amb el connector
    for (size_t i = 0; i < n; i++) {
        resultat.push_back(llista1[i] + connector + llista2[i]);
    }

    return resultat;
}

int main() {
    // Exemple de dues llistes
    vector<string> llista1 = {"sub", "supra"};
    vector<string> llista2 = {"campió", "campiona"};
    string connector = "-";  // Connector

    // Cridem la funció
    vector<string> resultat = concatenar_llistes(llista1, llista2, connector);

    // Imprimim el resultat
    cout << "Les paraules concatenades són: ";
    for (const string& paraula : resultat) {
        cout << paraula << " ";
    }
    cout << endl;

    return 0;
}