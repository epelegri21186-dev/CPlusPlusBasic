#include <iostream>
#include <vector>
#include <unordered_set>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> llista_20_elements() {
    vector<int> llista;
    for (int i = 0; i < 20; ++i) {
        llista.push_back(rand() % 100 + 1);
    }
    return llista;
}
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
    srand(time(0));
    vector<int> llista = llista_20_elements();
    cout << "Llista generada: ";
    for (int num : llista) {
        cout << num << " ";
    }
    cout << endl;
    cout << "La llista " << (hi_ha_duplicats(llista) ? "té duplicats." : "no té duplicats.") << endl;

    return 0;
}