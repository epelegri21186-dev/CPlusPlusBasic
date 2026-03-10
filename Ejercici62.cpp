#include <iostream>
#include <vector>
#include <cmath> // Per usar la funció pow()
using namespace std;

// Funció per obtenir els 10 primers números elevats a una potència
vector<int> obtenir_potencies(int pot) {
    vector<int> potencies;

    // Generem els 10 primers números elevats a la potència donada
    for (int i = 0; i <= 10; i++) {
        potencies.push_back(pow(i, pot)); // Calcula i^pot
    }

    return potencies;
}

int main() {
    int pot; // Potència donada

    // Demanem a l'usuari la potència
    cout << "Introdueix la potència a la qual vols elevar els números (ex: 2 per el quadrat, 3 per el cub): ";
    cin >> pot;

    // Cridem la funció per obtenir els números elevats a la potència
    vector<int> resultat = obtenir_potencies(pot);

    // Mostrem el resultat
    cout << "Els primers 10 números elevats a la potència " << pot << " són: ";
    for (int num : resultat) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}