#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string invertir(string a){
    reverse(a.begin(), a.end());
    return a;
}
int main(){
    string x;
    x="Soc del Ramis";
    cout<<invertir(x)<<endl;
}