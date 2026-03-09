#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool hi_ha_duplicats(const vector<int>& llista) {
    unordered_set<int> elements;
    for (int num : llista) {
        if (elements.find(num) != elements.end()) {
            return true;
        }
        elements.insert(num);
    }

    return false; 
}

int main() {
    vector<int> llista1 = {1, 2, 3, 4, 5};
    vector<int> llista2 = {1, 2, 3, 4, 2};
    vector<int> llista3 = {10, 10, 10, 10};

    cout << "Llista 1: " << (hi_ha_duplicats(llista1) ? "Hi ha duplicats" : "No hi ha duplicats") << endl;
    cout << "Llista 2: " << (hi_ha_duplicats(llista2) ? "Hi ha duplicats" : "No hi ha duplicats") << endl;
    cout << "Llista 3: " << (hi_ha_duplicats(llista3) ? "Hi ha duplicats" : "No hi ha duplicats") << endl;

    return 0;
}