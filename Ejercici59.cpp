#include <iostream>
#include <vector>
using namespace std;

// Funció per comptar els elements on el valor coincideix amb el seu índex
int comptar_coincidencies(const vector<int>& llista) {
    int comptador = 0;

    // Iterem per la llista
    for (size_t i = 0; i < llista.size(); i++) {
        if (llista[i] == i) {
            comptador++; // Si el valor coincideix amb l'índex, incrementem el comptador
        }
    }

    return comptador;
}

int main() {
    // Exemple de llista de valors numèrics
    vector<int> llista = {0, 2, 3, 3, 4};
    
    // Cridem la funció
    int resultat = comptar_coincidencies(llista);

    // Mostrem el resultat
    cout << "El nombre d'elements on el valor coincideix amb l'índex és: " << resultat << endl;

    return 0;
}