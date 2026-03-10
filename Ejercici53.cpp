#include <iostream>
using namespace std;

// Funció per comprovar si un número és primer
bool es_primer(int num) {
    if (num <= 1) {
        return false; // Els números menors o iguals a 1 no són primers
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Si es pot dividir per un altre número, no és primer
        }
    }
    return true; // Si no es pot dividir, és primer
}

int main() {
    int comptador = 0;

    cout << "Els números primers entre 1 i 100 són: " << endl;
    // Iterem sobre tots els números entre 1 i 100
    for (int i = 1; i <= 100; i++) {
        if (es_primer(i)) {
            cout << i << " ";
            comptador++; // Incrementem el comptador de primers
        }
    }

    cout << endl;
    cout << "Hi ha un total de " << comptador << " números primers entre 1 i 100." << endl;

    return 0;
}