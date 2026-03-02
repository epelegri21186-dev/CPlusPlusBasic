#include <iostream>
#include <bitset>
using namespace std;


int main(){
    int n;
    string h;
    cin >> n;
    h = bitset<8>(n).to_string();
    cout << h << endl;
}