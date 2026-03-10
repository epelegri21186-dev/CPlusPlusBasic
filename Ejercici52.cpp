#include <iostream>
using namespace std;

int main() {
    // Bucle per les línies
    for (int i = 5; i >= 1; i--) {
        // Bucle per imprimir els números a cada línia
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;  // Salta de línia després de cada fila
    }

    return 0;
}