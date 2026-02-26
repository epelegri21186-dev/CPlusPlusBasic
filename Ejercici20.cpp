#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> a = {"Hola", "Ramis", "IES", "Paraula"};

    string x = a[0];

    for (string w : a) {
        if (w.size() > x.size()) {
            x = w;
        }
    }
    cout <<x<< endl;
}