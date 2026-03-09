#include <iostream>
#include <string>
using namespace std;

int main() {
    string p1, p2;

    cout << "Introduce la primera palabra: ";
    cin >> p1;

    cout << "Introduce la segunda palabra: ";
    cin >> p2;

    int l1 = p1.length();
    int l2 = p2.length();

    if (p1[l1-1] == p2[l2-1] &&
        p1[l1-2] == p2[l2-2] &&
        p1[l1-3] == p2[l2-3]) {

        cout << "Riman" << endl;

    } else if (p1[l1-1] == p2[l2-1] &&
               p1[l1-2] == p2[l2-2]) {

        cout << "Riman un poco" << endl;

    } else {
        cout << "No riman" << endl;
    }

    return 0;
}