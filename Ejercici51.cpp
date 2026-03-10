#include <iostream>
#include <vector>
#include <string>
using namespace std;

void elements_parells(const vector<string>& llista) {
    for (size_t i = 0; i < llista.size(); i++) {
        // Imprimir només els elements en posicions parelles
        if (i % 2 == 0) {
            cout << llista[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    // Exemple de llista de paraules
    vector<string> paraules = {"aigua", "cel", "terra", "sol", "pluja", "vent", "mar"};
    
    // Cridem la funció per mostrar els elements parells
    elements_parells(paraules);

    return 0;
}