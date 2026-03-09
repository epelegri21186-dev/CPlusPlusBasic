#include <iostream>
#include <vector>
using namespace std;

vector<int> eliminarcapicua(const vector<int>& llista) {
    vector<int> novaLlista;
    if (llista.size() > 2) {
        for (size_t i = 1; i < llista.size() - 1; ++i) {
            novaLlista.push_back(llista[i]);
        }
    }

    return novaLlista;
}

int main() {
    vector<int> llista = {1, 2, 3, 4, 5};
    vector<int> novaLlista = eliminarcapicua(llista);
    cout << "Nova llista sense el primer i darrer element: ";
    for (int num : novaLlista) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}