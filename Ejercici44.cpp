#include <iostream>
#include <vector>
#include <set>

std::vector<int> elimina_duplicats(const std::vector<int>& llista) {
    std::set<int> conjunt(llista.begin(), llista.end());
    std::vector<int> llista_sense_duplicats(conjunt.begin(), conjunt.end());
    return llista_sense_duplicats;
}

int main() {
    std::vector<int> llista = {1, 2, 2, 3, 4, 4, 5, 5, 6};

    std::vector<int> resultat = elimina_duplicats(llista);

    std::cout << "Llista sense duplicats: ";
    for (int num : resultat) {
        std::cout << num << " ";
    }

    return 0;
}