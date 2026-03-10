#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

std::vector<std::string> crear_llista_fitxer(const std::string& nom_fitxer) {
    std::ifstream fitxer(nom_fitxer); 
    std::vector<std::string> llista_paraules;

    if (!fitxer.is_open()) {
        std::cerr << "No s'ha pogut obrir el fitxer: " << nom_fitxer << std::endl;
        return llista_paraules;
    }

    std::string linia;
    while (std::getline(fitxer, linia)) {
        std::stringstream ss(linia);
        std::string paraula;

        while (ss >> paraula) {
            llista_paraules.push_back(paraula);
        }
    }

    fitxer.close(); 
    return llista_paraules; 
}

int main() {
    std::string nom_fitxer = "exemple.txt";  
    std::vector<std::string> llista = crear_llista_fitxer(nom_fitxer);

    std::cout << "Les paraules llegides del fitxer són:" << std::endl;
    for (const std::string& paraula : llista) {
        std::cout << paraula << std::endl;
    }

    return 0;
}