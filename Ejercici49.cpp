#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int suma = 0;

    // Sol·licitem els dos números a l'usuari
    cout << "Introdueix el primer número: ";
    cin >> num1;
    cout << "Introdueix el segon número: ";
    cin >> num2;

    // Assegurem-nos que num1 és el menor i num2 el major
    if (num1 > num2) {
        swap(num1, num2); // Intercanviem els valors si cal
    }

    // Bucle per sumar tots els números entre num1 i num2
    for (int i = num1; i <= num2; i++) {
        suma += i;
    }

    // Mostrem el resultat
    cout << "La suma dels números entre " << num1 << " i " << num2 << " és: " << suma << endl;

    return 0;
}