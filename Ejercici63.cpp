#include <iostream>
using namespace std;

// Funció per realitzar una divisió amb control de divisió per zero
double dividir(double numerador, double denominador) {
    // Comprovem si el denominador és zero
    if (denominador == 0) {
        cout << "Error: No es pot dividir per zero!" << endl;
        return 0; // Retornem 0 en cas d'intentar dividir per zero
    } else {
        return numerador / denominador; // Realitzem la divisió si el denominador no és zero
    }
}

int main() {
    double numerador, denominador;

    // Demanem al usuari els valors per la divisió
    cout << "Introdueix el numerador: ";
    cin >> numerador;

    cout << "Introdueix el denominador: ";
    cin >> denominador;

    // Cridem la funció per realitzar la divisió
    double resultat = dividir(numerador, denominador);

    // Si la divisió no ha estat per zero, mostrem el resultat
    if (denominador != 0) {
        cout << "El resultat de la divisió és: " << resultat << endl;
    }

    return 0;
}