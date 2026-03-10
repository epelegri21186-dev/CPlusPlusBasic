#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Funció per crear un diccionari amb els elements de la llista com a clau i el seu índex com a valor
map<string, int> llista_a_diccionari(const vector<string>& llista) {
    map<string, int> diccionari;

    // Iterem sobre la llista i afegim cada element al diccionari amb el seu índex com a valor
    for (size_t i = 0; i < llista.size(); i++) {
        diccionari[llista[i]] = i;
    }

    return diccionari;
}

int main() {
    // Exemple de llista
    vector<string> llista = {"casa", "cotxe", "cadira", "taula"};
    
    // Cridem la funció
    map<string, int> resultat = llista_a_diccionari(llista);

    // Mostrem el diccionari
    cout << "El diccionari és: " << endl;
    for (const auto& parella : resultat) {
        cout << "{" << parella.first << ": " << parella.second << "}" << endl;
    }

    return 0;
}