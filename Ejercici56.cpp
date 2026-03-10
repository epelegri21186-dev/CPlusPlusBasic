#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció per trobar paraules que comencen per la lletra donada
vector<string> paraules_per_letra(const vector<string>& paraules, char lletra) {
    vector<string> resultat;

    // Iterem per cada paraula de la llista
    for (const string& paraula : paraules) {
        // Comprovem si la primera lletra de la paraula coincideix amb la lletra donada
        if (paraula[0] == lletra) {
            resultat.push_back(paraula); // Afegim la paraula al resultat
        }
    }

    return resultat;
}

int main() {
    // Exemple de llista de paraules
    vector<string> paraules = {"maria", "manta", "peu", "mà"};
    char lletra = 'p'; // Lletra per filtrar les paraules

    // Cridem la funció
    vector<string> resultat = paraules_per_letra(paraules, lletra);

    // Mostrem el resultat
    cout << "Les paraules que comencen per '" << lletra << "' són: ";
    for (const string& paraula : resultat) {
        cout << paraula << " ";
    }
    cout << endl;

    return 0;
}