#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Funció per llegir la informació d'un fitxer
void llegir_fitxer(const string& nom_fitxer) {
    // Obrim el fitxer en mode lectura
    ifstream fitxer(nom_fitxer);

    // Comprovem si el fitxer s'ha obert correctament
    if (!fitxer) {
        // Si no es pot obrir el fitxer, mostrem un missatge d'error
        cout << "Error: No es pot obrir el fitxer '" << nom_fitxer << "'." << endl;
        return;
    }

    string linia;
    cout << "Contingut del fitxer '" << nom_fitxer << "':\n";
    
    // Llegim i mostrem cada línia del fitxer
    while (getline(fitxer, linia)) {
        cout << linia << endl;
    }

    // Tanquem el fitxer quan acabem de llegir
    fitxer.close();
}

int main() {
    string nom_fitxer;

    // Demanem el nom del fitxer a l'usuari
    cout << "Introdueix el nom del fitxer que vols llegir: ";
    cin >> nom_fitxer;

    // Cridem la funció per llegir el fitxer
    llegir_fitxer(nom_fitxer);

    return 0;
}