#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int x = 0;
    getline(cin, a);
    for (int i = 0; i < a.length(); i++) {
        if (isupper(a[i])) {
            x++;
        }
    }
    cout <<x<< endl;
}