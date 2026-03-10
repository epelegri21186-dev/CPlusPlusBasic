#include <iostream>
#include <vector>
using namespace std;

// Funció per obtenir els 10 primers números parells
vector<int> obtenir_parells() {
    vector<int> parells;

    // Generem els 10 primers números parells
    for (int i = 1; i <= 10; i++) {
        parells.push_back(i * 2); // Afegim els números parells (2, 4, 6, ...)
    }

    return parells;
}

int main() {
    // Cridem la funció per obtenir els 10 primers números parells
    vector<int> parells = obtenir_parells();

    // Mostrem el resultat
    cout << "Els 10 primers números parells són: ";
    for (int num : parells) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}