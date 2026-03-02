#include <iostream>
using namespace std;

int main(){
    int aa, an;
    string n;
    cin >> aa;
    cout << "Nom" << "\t" << "Naxement"<< "\t" << "Anys" << endl;
    for(int i=0;i < 4;i++){
        cin >> n;
        cin >>an;
        cout << n << "\t" << an << "\t" <<aa - an << endl;
    }
}