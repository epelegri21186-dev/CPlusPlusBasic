#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Funció per convertir la llista de dígits en un número
int Passar_a_Numero(const vector<int>& llista) {
    int numero = 0;

    // Iterem per cada dígit de la llista
    for (size_t i = 0; i < llista.size(); i++) {
        numero = numero * 10 + llista[i]; // Desplacem els digits a l'esquerra i afegim el nou dígit
    }

    return numero;
}

int main() {
    // Exemple de llista de dígits
    vector<int> llista = {3, 4, 1, 5};
    
    // Cridem la funció
    int resultat = Passar_a_Numero(llista);
    
    // Imprimim el resultat
    cout << "El número corresponent és: " << resultat << endl;

    return 0;
}