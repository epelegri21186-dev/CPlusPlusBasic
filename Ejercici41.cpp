#include <iostream>
#include <vector>
using namespace std;

// Funció per comprovar si la llista està ordenada en ordre ascendent, descendent o no està ordenada
string esta_ordenada(const vector<int>& llista) {
    bool ascendent = true, descendent = true;

    // Comprovem si la llista està ordenada de manera ascendent o descendent
    for (size_t i = 1; i < llista.size(); i++) {
        if (llista[i] < llista[i - 1]) {
            ascendent = false;  // Si trobem un element més petit que el precedent, no està ascendent
        }
        if (llista[i] > llista[i - 1]) {
            descendent = false; // Si trobem un element més gran que el precedent, no està descendent
        }
    }

    // Retornem el resultat segons els casos
    if (ascendent) {
        return "Està ordenada de forma ascendent.";
    } else if (descendent) {
        return "Està ordenada de forma descendent.";
    } else {
        return "No està ordenada.";
    }
}

int main() {

    vector<int> llista1 = {3, 2, 1};
    vector<int> llista2 = {4, 5, 6};
    vector<int> llista3 = {1, 3, 2, 4};

    cout << "Llista 1: " << esta_ordenada(llista1) << endl;
    cout << "Llista 2: " << esta_ordenada(llista2) << endl;
    cout << "Llista 3: " << esta_ordenada(llista3) << endl;

    return 0;
}