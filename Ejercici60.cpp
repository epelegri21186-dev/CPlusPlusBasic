#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció per convertir una paraula en una llista de lletres
vector<char> paraula_a_llista(const string& paraula) {
    vector<char> llista;

    // Iterem per cada caràcter de la paraula i l'afegim a la llista
    for (char lletra : paraula) {
        llista.push_back(lletra);
    }

    return llista;
}

int main() {
    // Exemple de paraula
    string paraula = "institut";
    
    // Cridem la funció
    vector<char> resultat = paraula_a_llista(paraula);

    // Mostrem el resultat
    cout << "Les lletres de la paraula '" << paraula << "' són: ";
    for (char lletra : resultat) {
        cout << "'" << lletra << "' ";
    }
    cout << endl;

    return 0;
}