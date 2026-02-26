#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    string a, b;
    cout << "escriu el teu nom.\n";
    cin >> a;
    cout<<"escriu els cognoms";
    cin >> b;
    cout << a.insert(a.size(),b) << endl;
    return 0;
}